#include <stdio.h>

// 3등의 성적은?

int main() {
	
	int n, i, j, tmp,idx,cnt=0;
	scanf("%d", &n);
	
	int a[101];
	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
//	for(i=0; i<n; i++) {
//		idx=i;
//		for(j= i+1; j<n-1; j++) {
//			if(a[idx]>a[j]) idx=j;
//		}
//		tmp = a[idx];
//		a[idx] = a[i];
//		a[i] =tmp;
//	}

	for(i=0; i<n-1; i++) {
		idx=i;
		for(j= i+1; j<n; j++) {
			if(a[idx]<a[j]) idx=j;
		}
		tmp = a[idx];
		a[idx] = a[i];
		a[i] =tmp;
	}
	
	for(i=1; i<n; i++) {
			if(a[i-1] !=a[i]) cnt++;
			if(cnt==2) {
				printf("%d\n", a[i]);
				break;
			}
		
	}
	
	
	return 0;
	
}
