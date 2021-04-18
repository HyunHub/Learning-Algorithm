#include <stdio.h>

// special sort - bubble sort 버블 정렬 

int main() {

	int n, i, j, tmp;
	int a[100];
	
	scanf("%d", &n);
	
	for(i =0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
//			if(a[j]>a[j+1]){
//				if(a[j]<0) break;
//				else {
//					tmp = a[j];
//					a[j] = a[j+1];
//					a[j+1] = tmp;
//				}
//			}

		if(a[j] >0 && a[j+1] <0) {
			tmp = a[j];
			a[j] = a[j+1];
			a[j+1] = tmp;
		}
		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
	
//	int n, i, p = 0;
//	scanf("%d", &n);
//	
//	vector<int> a(n);
//	vector<int> b(n);
//	
//	for(i = 0; i < n; i++) scanf("%d", &a[i]);
//	
//	for(i = 0; i < n; i++) {
//		if(a[i] < 0) b[p++] = a[i];
//	}
//	
//	for(i = 0; i < n; i++) {
//		if(a[i] > 0) b[p++] = a[i];
//	}
//	
//	for(i = 0; i < n; i++) printf("%d ", b[i]);
//	return 0;
}
