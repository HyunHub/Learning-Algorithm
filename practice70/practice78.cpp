#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
// #include <iostream>
using namespace std;

// 원더랜드(Kruskal MST 알고리즘 : Union&Find 활용) 
 
int unf[10001];
 struct Edge{
 	int v1;
 	int v2;
 	int val;
 	Edge(int a, int b, int c) {
 		v1=a;
 		v2=b;
 		val=c;
	 }
	 bool operator<(Edge &b){
	 	return val<b.val; // 오름차순 정렬  
	 }
 };
 
 int Find(int v){
 	if(v==unf[v]) return v;
 	else return unf[v]=Find(unf[v]);
 }
 
 void Union(int a, int b){
 	a=Find(a);
 	b=Find(b);
 	if(a!=b) unf[a]=b;
 }
 
int main() {
	vector<Edge> Ed;
	int i, n, m, a, b, c, cnt=0, res=0;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		unf[i]=i;
	}
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	sort(Ed.begin(),Ed.end());
	for(i=0; i<m; i++){
		int fa=Find(Ed[i].v1);
		int fb=Find(Ed[i].v2);
		if(fa!=fb){ // 서로 다른 집합 
			res+=Ed[i].val; // 간선 추가  
			Union(Ed[i].v1,Ed[i].v2); // Union 
		}
	}
	
	printf("%d\n", res); 
	return 0; 
} 
