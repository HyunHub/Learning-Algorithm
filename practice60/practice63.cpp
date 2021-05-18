#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 인접행렬(가중치 방향그래프) 


int main() {
	
	int n, m, i, j;
	int d1, d2, d3;
	scanf("%d %d", &n, &m);
	
	int a[51][51] = {0,}; // 초기화 꼭 해줘야 함  
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &d1, &d2, &d3);
			a[d1][d2] = d3;
	}
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			printf("%d ", a[i][j]);
		}
		puts("");
	}
	
	return 0;
} 
