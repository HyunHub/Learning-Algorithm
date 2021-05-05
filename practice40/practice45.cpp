#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 공주 구하기(조세퍼스) 

int main() {
	
	int n, k, i, pos=0, bp=0, cnt=0;
	
	scanf("%d %d", &n, &k);
	vector<int> p(n+1);
	
	while(1) {
		pos++;
		if(pos >n) pos=1;
		if(p[pos]==0) {
			cnt++;
			if(cnt == k) {
				p[pos] =1;
				cnt=0;
				bp++;
			}
		}
		if(bp == n-1) break;
	}
	
	for(i=1; i<=n; i++) {
		if(p[i] == 0) {
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
} 
