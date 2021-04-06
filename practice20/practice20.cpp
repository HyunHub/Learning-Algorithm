#include <stdio.h>

// 가위 바위 보
// 1 가위 2 바위 3 보  

int main() {
	
	int n, i, cnt=0;
	int a[100];
	int b[100];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++) {
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<n; i++) {
		 if(a[i] == b[i]) printf("D ");
		 else if((a[i] == 1) && (b[i]==3)) printf("A ");
		 else if((a[i] == 2) && (b[i]==1)) printf("A ");
		 else if((a[i] == 3) && (b[i]==2)) printf("A ");
		 else printf("B ");
	}
	
	return 0;
} 
