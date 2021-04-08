#include <stdio.h>

// 연속 부분 증가 수열

int main() {
	
	int n, pre, now, i, cnt, max;
	
	scanf("%d", &n);
	scanf("%d" , &pre);
	
	cnt= 1;
	max= 1;
	
	for(i=1; i<n; i++) {
		scanf("%d", &now);
		if(pre <= now) {
			cnt++;
			if(cnt > max) max=cnt;
		}
		else cnt=1;
		pre = now;
	}
	
	printf("%d",max);
	
	return 0;
	
} 
