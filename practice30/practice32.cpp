#include <stdio.h>

// 선택 정렬

int main() {
	
	int n, i, tmp,j;
	int idx;
	int a[101];
	scanf("%d", &n);
	
	//scanf("%d", &a[0]);
	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
//	for(i=0; i<n; i++) {
//		for(j=i+1; j<n; j++) {
//			if(a[i]>a[j]) {
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] =tmp;
//			}
//		}
//	}

	for(i=0; i<n-1; i++) {
		idx =i;
		for(j=i+1; j<n; j++) {
			if(a[j]<a[idx]) idx=j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] =tmp;
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
} 
