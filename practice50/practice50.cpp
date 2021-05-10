#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 영지(territory) 선택 : small. brute force

int a[51][51];
int main() {
	
//	int h, w, i, j, sum, th, tw;
//	
//	scanf("%d %d", &h, &w);
//	
//	vector<vector<int> > t(h+1, vector<int>(w+1, 0));
//	
//	for(i=1;i<=h;i++) {
//		for(j=1;j<=w;j++){
//			scanf("%d", t[h][w]);
//		}
//	}
//	
//	scanf("%d %d", &th, &tw);

	freopen("input5.txt", "rt", stdin);
	int h, w, n, m, i, j, k, s, sum=0, max=-2147000000;
	
	scanf("%d %d", &h, &w);
	for(i=1; i<=h; i++) {
		for(j=1; j<=w; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=h-n+1; i++) {
		for(j=1; j<=w-m+1; j++) {
			sum=0;
			for(k=i; k<i+n; k++) {
				for(s=j; s<j+m; s++) {
					sum=sum+a[k][s];
				}
			}
			if(sum>max) {
				max=sum;
			}
		}
	}
	
	printf("%d\n", max);
	
	
	return 0;
	
} 
