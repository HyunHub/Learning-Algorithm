#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

// 3의 개수는? small 

int main() {
	
	int n, i, digit, cnt=0, tmp;
	
	scanf("%d", &n);
	
//		tmp=n;
//		while(1) {
//				if(((tmp%10) >= 3)&&((tmp/10)>=1)) {
//					cnt++;
//					tmp-=10;
//				} 
//				else if((tmp<10)&&(tmp>=3)){
//					cnt++;
//					break;
//				}
//		}

	for(i=1; i<=n; i++) {
		tmp =i;
		while(tmp>0) {
			digit = tmp%10;
			if(digit == 3) cnt++;
			tmp = tmp/10;
		}
	}

	
	printf("%d", cnt);
	
	return 0;
}
