#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

// 석차 구하기 brute force
 
int main() {
	
	int n, i, j;
	
	scanf("%d", &n);
	
	int a[200];
	int b[200];
	
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		b[i] = 1;
	}
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(a[i] < a[j]) b[i]++;
		}
	}
	
	for(i=1; i<=n; i++) {
		printf("%d " , b[i]);
	}
	
	return 0;
	
}
