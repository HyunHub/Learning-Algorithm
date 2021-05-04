#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 마구간 정하기(이분검색 응용)

int n;
int Count(int len, int x[]) {
	int i, cnt=1, pos=x[1];
	for(i=2; i<=n; i++) {
		if(x[i]-pos>=len){
			cnt++;
			pos=x[i];
		}
	}
	return cnt;
}
int main() {
		
	int m, i, lt=1, rt, mid, res;

	scanf("%d %d", &n, &m);
	int *x = new int[n+1]; // 배열 동적 할당 	
	
	for(i=1; i<=n; i++) {
		scanf("%d", &x[i]);
	}
	sort(x+1, x+n+1); // 배열 들어간 위치의 주소   
	
	rt=x[n]; // 마지막 좌표 
	
	while(lt <= rt) {
		mid=(lt+rt)/2;
		if(Count(mid, x)>=m){
			res= mid;
			lt=mid+1;
		}
		else rt=mid-1;
	}
	
	printf("%d\n", res);
	delete[] x;
	return 0;
		 
}
