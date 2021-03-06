#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
// #include <iostream>
// #include<bits/stdc++.h> 
using namespace std;

// 벨만-포드 알고리즘 Bellman-Ford's 
 
int dist[101];
struct Edge{
	int s;
	int e;
	int val;
	Edge(int a, int b, int c){
		s=a;
		e=b;
		val=c;
	}
};

int main() {
	vector<Edge> Ed;
	int i, n, m, a, b, c, j, s, e;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	
	for(i=1; i<=n; i++){
		dist[i]=2147000000;
	}
	scanf("%d %d", &s, &e);
	dist[s]=0;
	for(i=1; i<n; i++){
		for(j=0; j<Ed.size(); j++) {
			int u=Ed[j].s; // 출발  
			int v=Ed[j].e; // 도착  
			int w=Ed[j].val; // 가중치
			if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
				dist[v]=dist[u]+w;
			} 
		}
	}
	for(j=0; j<Ed.size(); j++){ // 음의 사이클  
		int u=Ed[j].s;
		int v=Ed[j].e;
		int w=Ed[j].val;
		if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
				printf("-1\n");
				exit(0);
			} 
	}
	
	printf("%d\n", dist[e]);
	return 0; 
	
}
