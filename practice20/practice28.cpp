#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

// N!에서 연속된 0의 개수 

int main(){
	
//	int n, i, mul=1, cnt=0, max=-2147000000, tmp=0;
//	
//	scanf("%d", &n);
//	
//	for(i = 2; i<=n; i++) {
//		mul *= i;
//	}
//	
//	printf("%d\n", mul);
//	tmp = mul;
//	
//	for(i=0; i<10; i++) {
//		if(tmp %10 == 0) {
//			cnt++;
//			tmp /= 10;
//		} else {
//			tmp /= 10;
//			cnt = 0;
//		}
//		if(cnt > max) max=cnt;
//
//	}
//	
//	printf("%d", max);

	int n,i,j,tmp,cnt1=0,cnt2=0;
	scanf("%d", &n);
	
	for(i=2; i<=n; i++) {
		tmp = i;
		j=2;
		while(1) {
			if(tmp % j==0) {
				if(j==2) cnt1++;
				else if(j ==5) cnt2++;
				tmp = tmp/j;
			}
			else j++;
			if(tmp ==1) break;
		}
	}
	
	if(cnt1>cnt2) printf("%d", cnt2);
	else printf("%d", cnt1);
	
	return 0;
} 
