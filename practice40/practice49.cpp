#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 블록의 최댓값

int a[11][11]; 
int main() {
	
	int n, i, j, sum=0, front, right;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++) {
		scanf("%d", &front);
		for(j=0;j<n;j++) {
			a[j][i] =front;
		}
	}
	
	for(i=n-1;i>0;i--) {
		scanf("%d", &right);
		for(j=0;j<n;j++){
		//	while(1){
			if(a[i][j] > right) {
				a[i][j] = right;
		//	}
		//	else break;
		}
		}
	}
	
//	for(i=1;i<n;i++){
//		for(j=1;j<n;j++) {
//			if(a[0][j]==0) {
//				a[i][j] =0;
//			}
//			else {
//			a[i][j]++;
//			if(a[i][j] >=a[i][0] || a[i][j] >=a[0][j]) {
//				break;
//			}
//			}
//			
//		}
//		sum += a[i][j];
//	}
	
	printf("-----------------\n");
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%d ", a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
	
	printf("%d", sum);
	
//	int b[11];
//	scanf("%d", &n);
//	for(i=1;i<=n;i++){
//		scanf("%d", &b[i]);
//	}
//	for(i=1;i<=n;i++) {
//		for(j=1;j<=n;j++){
//			a[j][i]=b[i];
//		}
//	}
//	for(i=n;i>=n;i--){
//		scanf("%d", &b[i]);
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if(a[i][j]>b[i]) a[i][j]=b[i];
//		}
//	}
	return 0;
}
