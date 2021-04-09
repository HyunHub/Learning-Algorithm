#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

// Jolly Jumpers

int main() {
	
//	int n, i;
//	scanf("%d" , &n);
//	vector<int> b(n);
//	vector<int> a(n);
//	
//	int cnt = 0;
//	int k = n-1;
//	
//	int pre, num;
//	scanf("%d", &pre);
//	
//	for(i=1; i<n; i++) {
//		printf("pre : %d\n", pre);
//		scanf("%d", &num);
//		printf("num : %d\n", num);
//		if(pre - num >0) b[i]=pre-num;
//		else if(pre - num <0) b[i] = num-pre;
//		else b[i] =0;
//		
//		pre=num;
//	}
//	
//	for(i=1; i<=k; i++) {
//		printf("b[i] : %d\n", b[i]);
//		a[b[i]]++;
//	}
//	
//	for(i=1; i<=k; i++){
//		if(a[i] == 1) cnt++;
//		else break;
//	}
//	
//	printf("cnt : %d\n",cnt);
//	if(cnt == k) printf("YES\n");
//	else printf("NO\n");

	int n, i, now, pre, pos;
	scanf("%d", &n);
	
	vector<int> ch(n);
	scanf("%d", &pre);
	
	for(i=1; i<n; i++) {
		scanf("%d", &now);
		pos = abs(pre-now);
		if(pos>0 && pos<n && ch[pos] ==0) ch[pos] =1;
		else {
			printf("NO\n");
			return 0;
		}
		
		pre= now;
	}
	
	printf("YES\n");
	
	return 0;
}
