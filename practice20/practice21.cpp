#include <stdio.h>

// 카드 

int main() {
	
	int n, acnt=0, bcnt=0;
	int a[10];
	int b[10];
	int lw = 0;
	
	for(int i=0; i<10; i++) {
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<10; i++) {
		scanf("%d", &b[i]);
	}
	
	for(int i=0; i<10; i++) {
		if(a[i] > b[i]) {
			acnt += 3;
			lw = 1;
		}
		else if(a[i] < b[i]) {
			bcnt += 3;
			lw = 2;
		}
		else {
			acnt += 1;
			bcnt += 1;
		}
	}
	printf("%d %d\n", acnt, bcnt);
	if(acnt > bcnt) printf("A");
	else if(acnt < bcnt) printf("B");
	else {
		if(lw == 1) printf("A");
		else if(lw == 2) printf("B");
		else printf("D");
	}
	
	return 0;
	
} 
