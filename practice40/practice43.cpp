#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 뮤직비디오 (이분검색 응용: 결정 알고리즘)

int a[1001], n;

int Count(int s) {
	int i, cnt=1, sum=0;
	for(i=1; i<=n; i++) {
		if(sum +a[i]>s){
			cnt++; // 새로운 dvd 생성  
			sum = a[i]; // 그 노래부터 새롭게 저장  
		}  
		else sum = sum+a[i];
	}
	return cnt; 
}

int main() {
	
	int m, i, lt=1, rt=0, mid, res;
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		rt = rt +a[i];
	}
	
	while(lt <= rt) {
		mid = (lt+rt)/2;
		if(Count(mid) <= m) {
			res = mid;
			rt = mid-1;
		}
		else lt=mid+1;
	}
	
	printf("%d\n", res);
	
	return 0;
} 
