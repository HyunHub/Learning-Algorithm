#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
// #include <iostream>
using namespace std;

// 원더랜드(Prim MST 알고리즘 : priority_queue 활용)
 
int ch[30];
 struct Edge{
 	int e;
 	int val;
 	Edge(int a, int b) {
 		e=a;
 		val=b;
	 }
	 bool operator<(const Edge &b)const{
	 	return val>b.val; // 내림차순 정렬. 최소 힙 return   
	 }
 };
 
int main() {
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int i, n, m, a, b, c, res=0;
	scanf("%d %d", &n, &m);

	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		// 무방향 가중치 인접리스트 
		// a->b / b->a  
		map[a].push_back(make_pair(b,c));
		map[b].push_back(make_pair(a,c));
	}
	Q.push(Edge(1,0));
	
	while(!Q.empty()){
		Edge tmp=Q.top(); // 가중치 가장 작은 거 참조  
		Q.pop();
		int v=tmp.e;
		int cost=tmp.val;
		if(ch[v]==0){ // v 정점이 트리에 원소인지  
			res+=cost;
			ch[v]=1;
			for(i=0; i<map[v].size(); i++) {
				// v에서 갈 수 있는 정점 번호와 가중치  
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}
	
	printf("%d\n", res); 
	return 0; 
} 
