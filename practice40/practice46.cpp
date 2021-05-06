#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 멀티태스킹(카카오 먹방 문제 변형)
 
int main() {
	
	int n, k, i, pos=0, cnt=0, tot=0;
	
	scanf("%d", &n);
	vector<int> a(n+1);
	
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		tot+=a[i];
	} 
	
	scanf("%d", &k);
	
	if(k>=tot) {
		printf("-1\n");
		return 0;
	}
	
	while(1) {
		pos++;
		if(a[pos] == 0) continue;
		//if(a[pos] != 0) {
			a[pos]--;
		//	k--;
			cnt++;
		//}
		if(cnt ==k) {
		//	printf("%d", pos);
			break; 
			}
		if(pos > n) {
			pos =1;
		}
	}
	
	while(1) {
		pos++;
		if(pos>n) pos=1;
		if(a[pos]!=0) break;
	}
	
	printf("%d\n", pos);
	
	return 0;
}
