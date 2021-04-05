#include <stdio.h>

// 소수의 개수

int main(){
	
	int n, flag, cnt=0;
	scanf("%d", &n);
	
	// time limit error
//	for(int i=2; i<=n; i++) {
//		flag=1;
//		for(int j=2; j<i; j++) {
//			if (i%j==0) {
//				flag=0;
//				break;
//			}
//		}
//		if(flag==1) cnt++;
//	}
//	printf("%d ", cnt);

	for(int i=2; i<=n; i++) {
		flag=1;
	
		for(int j=2; j*j<=i; j++) { // sqrt(i) 
			
			if(i%j==0) {
				flag=0;
				break;
			}
		}
		if(flag==1) cnt++;
		
	}
	
	printf("%d", cnt);
	
	return 0;
} 

