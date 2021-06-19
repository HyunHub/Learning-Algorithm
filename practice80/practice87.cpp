#include <stdio.h>
#include <queue>
//#include <vector>
//#include <algorithm> 
// #include <iostream>
//#include<bits/stdc++.h> 
using namespace std;

// 섬나라 아일랜드 BFS 
int n, map[30][30], cnt=0;
int dx[8] ={0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] ={-1, -1, 0, 1, 1, 1, 0, -1};
struct Loc{ // 좌표는 이렇게 함  
	int x;
	int y;
	Loc(int a, int b){
		x= a;
		y=b;
	}
};
queue<Loc> Q; // Loc 라는 구조체형을 저장하는 Queue  
int main() {
	
	int i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++) for(j=1; j<=n; j++) scanf("%d", &map[i][j]);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(map[i][j]==1){
				Q.push(Loc(i,j));
				map[i][j]=0;
				while(!Q.empty()){
					Loc tmp = Q.front();
					Q.pop();
					for(int i=0; i<8; i++){
						int xx= tmp.x+dx[i];
						int yy= tmp.y+dy[i];
						if(map[xx][yy]==1){
							Q.push(Loc(xx,yy));
							map[xx][yy]=0;
						}
					}
				}
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
} 
