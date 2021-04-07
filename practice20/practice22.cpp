#include <stdio.h>
#include <vector>
using namespace std;
// 온도의 최대값

int main() {
	
	int n, m, max, res=0, p=0;
	scanf("%d %d", &n, &m);
	vector<int> a(n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
//	for(int i=0; i<n-m; i++) {
//		res=0;
//		for(int j=i; j< i+m; j++) {
//			res += a[j];
//		}	
//		if(res > max) max= res;
//	}

	for(int i=0; i<m; i++) {
		res += a[i];
	}
	max = res;
	for(int i=m; i < n; i++){
		res = res + (a[i]-a[i-m]);
		if(res>max) max = res;
	}
		
	printf("%d", max);
	return 0;
} 
