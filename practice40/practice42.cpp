#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 이분 검색 
 
int main() {
	
	int n, m, i, lt, rt, mid;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	vector<int> a(n);
//	vector<int> a;
//	int tmp;
//	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
		
//		scanf("%d", tmp);
//		a.push_back(tmp);
//		공간이 추가되면서 동적배열로 만들 수 있음  
	}
	
	sort(a.begin(),a.end());
	
	lt=0;
	rt=n-1;

	while(lt<=rt){
		mid = (lt+rt)/2;
		
		if(m < a[mid]) {
			rt=mid-1;
		}
		else if(m == a[mid]) {
			printf("%d", mid+1);
			return 0;
		}
		else lt=mid+1;
	}
	
	return 0;
	
}
