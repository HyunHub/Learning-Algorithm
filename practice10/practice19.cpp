#include <stdio.h>

// 분노 유발자(1차원 배열의 필요성)

int a[100];
int main() {
	
	int n, m, i, j, cnt=0, max;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &m);
		a[i] = m;
		//if(i == n-1) max=a[i];
	}
	max = a[n-1];
	
	for(i = n-1; i>=0; i--) {
		if(max < a[i]) {
			max= a[i];
			cnt++;	
		}
	}

	printf("%d", cnt);
	return 0;
	
} 
