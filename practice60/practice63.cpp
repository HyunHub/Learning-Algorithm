#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// �������(����ġ ����׷���) 


int main() {
	
	int n, m, i, j;
	int d1, d2, d3;
	scanf("%d %d", &n, &m);
	
	int a[51][51] = {0,}; // �ʱ�ȭ �� ����� ��  
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
