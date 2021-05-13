#include <stdio.h>
#include <vector>
#include <algorithm>
#include<stack> 
using namespace std;

// ���� ���� (stack) 

int main() {
	int n, i, j=1, m;
	scanf("%d", &n);
	
	stack<int> s;
//	vector<int> a(n+1);
//	
//	for(i=1; i<=n; i++) {
//		a[i] = i;
//	}
	
	vector<char> str;
	
	for(i=1; i<=n; i++) {
		scanf("%d", &m);
		s.push(m);
		str.push_back('P'); //push_back �� ������ �þ 
		while(1) {
			if(s.empty()) break;
			if(j == s.top()){
				s.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
	}
	if(!s.empty()) printf("impossible\n");
	else {
		for(i=0; i<str.size(); i++) {
			printf("%c", str[i]);
		}
		
	}

	return 0;
	
		
} 


