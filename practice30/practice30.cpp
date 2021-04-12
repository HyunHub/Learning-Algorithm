#include <stdio.h>
#include <algorithm>
#include <vector>

// 3의 개수는? large 

int main() {
	
	int lt=1, cur, rt, k=1,n,res;
	
	scanf("%d", &n);
	
	while(lt != 0) {
		lt = n /(k*10);
		cur = (n/k)%10;
		rt = n%k;
		if(cur >3) {
			res = res + (lt+1)*k;
		}
		else if(cur <3) {
			res = res + (lt*k);
		} else {
			res = res +(lt *k) + (rt+1);
		}
		k = k*10;
	}
	
	printf("%d", res);
	
} 
