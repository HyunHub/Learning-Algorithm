#include <stdio.h>

//  Least Recently Used

int c[20];
int main() {
	
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &a);
		pos = -1;
		for(j=0; j<s; j++) {
			if(c[j] == a) pos=j;	
		}
		if(pos == -1) { // miss
			for(j=s-1; j>=1; j--) c[j] = c[j-1];
		} else { // hit
			for(j=pos; j>=1; j--) c[j] = c[j-1];
		}
		c[j] = a;
	}
	
	for(i=0; i<s; i++) {
		printf("%d ", c[i]);
	}
	
	return 0;
}
