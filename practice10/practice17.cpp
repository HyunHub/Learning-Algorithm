#include <stdio.h> 

int main() {
	
	int n;
	scanf("%d", &n);
	
	int i, j;
	int n1, n2;
	int rs;
	
	for(i=0; i<n; i++) {
		scanf("%d %d", &n1, &n2);
		rs = 0;
		for(j=1; j<=n1; j++) {
			rs += j;
		}
		if(rs == n2) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
