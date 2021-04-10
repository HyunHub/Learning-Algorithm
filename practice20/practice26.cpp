#include <stdio.h>
#include <vector>
using namespace std;

// ∏∂∂Û≈Ê

 
int main() {
	
	int n, i, j;
	
	scanf("%d", &n);
	 
//	vector<int> a(n);
//	vector<int> b(n);
//	
//	for(i=0; i<n; i++) {
//		scanf("%d", &a[i]);
//		b[i] = 1;
//	}
//	
//	for(i=n; i>0; i--) {
//		for(j=0; j<i; j++) {
//			if(a[i]<a[j]) b[i]++;
//		}
//	}
//	
//	for(i=0; i<n; i++) {
//		printf("%d ", b[i]);
//	}

	vector<int> a(n+1);
	int cnt =0;
	
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}
	printf("1 ");
	for(i=2; i<=n; i++) {
		cnt=0;
		for(j=i-1; j>=1; j--) {
			if(a[j] >= a[i]) cnt++;
		}
		printf("%d ", cnt+1);
	}
	
	return 0;
}
