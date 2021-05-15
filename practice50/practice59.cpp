#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 부분집합(DFS) 

int n, ch[11];
void DFS(int L) { // Tree의 Level 
	int i;
	
	if(L==n+1) {
		for(i=1; i<=n; i++) {
			if(ch[i]==1) printf("%d ", i);
		}	
		puts("");
	}
	else {
		ch[L] = 1;
		DFS(L+1);
		ch[L]=0;
		DFS(L+1);
	}
}

int main() {

	scanf("%d", &n);
	DFS(1);
	return 0;	 
} 
