#include <stdio.h>

// Ãþ°£ ¼ÒÀ½
 
int main() {
	
	int n, m, i, s, cnt=0, max=0;
	
	scanf("%d %d" , &n, &m);
	for(i = 0; i<n; i++) {
		scanf("%d", &s);
		if(s > m) {
			cnt++;
			if(cnt > max) {
				max= cnt;
			}
		}else cnt=0;
	} 
	
	if(max == 0) printf("-1\n");
	else printf("%d\n", max);
	return 0;
}
