#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 특정 수 만들기 (DFS) 

int n, m, a[11], cnt=0, path[11];
void DFS(int L, int val) {
 
	if(L==n+1) { // 부분집합 하나가 완성되는 지점  
		if(val==m) {
			cnt++;
			for(int i=1; i<L; i++) {
				printf("%d ", path[i]);
			}
			puts("");
		}
	}
	else {
		path[L]=a[L];
		DFS(L+1, val+a[L]);  
		path[L]=-a[L]; 
		DFS(L+1, val-a[L]);
		path[L]=0;
		DFS(L+1, val);   
	}
}

int main() {
	
	int i;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}
	
	DFS(1,0);
	if(cnt==0) printf("-1\n");
	else printf("%d", cnt);
	
	return 0;
} 
