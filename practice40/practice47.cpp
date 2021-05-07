#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 봉우리 (2차원 배열 탐색) 

int a[52][52];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
	
	int n, i, j, k, cnt=0, flag;
	scanf("%d", &n);
	
	//                        행크키          열크키
	// 기본은 0으로 초기화지만                 , 여기에 지정  
	// vector<vector<int> > a(n+2, vector<int>(n+2, 0));
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++){
		scanf("%d", &a[i][j]);	
		}
	}
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			flag = 0;
			for(k=0; k<4; k++) {
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]){
					flag=1;
					break; // 같거나 큰 거 발견  
				}
			}
			if(flag==0) cnt++; // 봉우리면  
		}
	}
	printf("%d ", cnt);
	
	return 0; 
	 
}
