#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 송아지 찾기 (BFS: 상태트리검색)

int ch[10001], d[3]={1, -1, 5};
int main() {
	
	int s, e, x, pos, i;
	
	queue<int> Q;
	scanf("%d %d", &s, &e);
	ch[s]=1;
	Q.push(s); // 출발지점 넣음  
	while(!Q.empty()) {
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++) {
			pos = x+d[i];
			if(pos<=0 || pos>10000) continue;
			if(pos==e) {
				// ch[s]=1로 해줘서 전 지점을 답으로  
				printf("%d\n", ch[x]);
				exit(0);
			}
			if(ch[pos]==0) {
				ch[pos]= ch[x]+1;
				Q.push(pos);
			}
		}
	}
	
	return 0;
	
} 
