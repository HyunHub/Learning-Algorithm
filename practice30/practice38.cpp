#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// Inversion Sequence


int main() {
	
	int n, pos, i, j;
	scanf("%d", &n);
	
//	int a[n];
//	int b[n] = {0, };
//	
//	for(i=0; i<n; i++) {
//		scanf("%d", &a[i]);
//	}
//	
//	for(i=n-1; i>=0; i--) {
//		pos = a[i];
//		for(j=0; j<i; j++) {
//			if(a[j] >pos) b[pos-1]++;
//		}
//	}
//	
//	for(i =0; i<n; i++) {
//		printf("%d ", b[i]);
//	}
// 위에 결과를 입력했을 때 나오는 결과 출력하게,,

//	int is[n];
//	int os[n];
	vector<int> is(n+1), os(n+1);

	
	for(i=1; i<=n; i++) {
		scanf("%d", &is[i]);
	}	
	
	for(i=n; i>=1; i--) {
		pos=i;
		for(j=1; j<=is[i]; j++) {
			os[pos] = os[pos+1];
			pos+x+;
		}
		os[pos] = i;
	}
	
	for(i=1; i<=n; i++) {
		printf("%d ", os[i]);
	}
	
	
	
	return 0;
}
