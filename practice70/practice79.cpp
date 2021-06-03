#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
// #include <iostream>
using namespace std;

// ��������(Prim MST �˰��� : priority_queue Ȱ��)
 
int ch[30];
 struct Edge{
 	int e;
 	int val;
 	Edge(int a, int b) {
 		e=a;
 		val=b;
	 }
	 bool operator<(const Edge &b)const{
	 	return val>b.val; // �������� ����. �ּ� �� return   
	 }
 };
 
int main() {
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	int i, n, m, a, b, c, res=0;
	scanf("%d %d", &n, &m);

	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		// ������ ����ġ ��������Ʈ 
		// a->b / b->a  
		map[a].push_back(make_pair(b,c));
		map[b].push_back(make_pair(a,c));
	}
	Q.push(Edge(1,0));
	
	while(!Q.empty()){
		Edge tmp=Q.top(); // ����ġ ���� ���� �� ����  
		Q.pop();
		int v=tmp.e;
		int cost=tmp.val;
		if(ch[v]==0){ // v ������ Ʈ���� ��������  
			res+=cost;
			ch[v]=1;
			for(i=0; i<map[v].size(); i++) {
				// v���� �� �� �ִ� ���� ��ȣ�� ����ġ  
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}
	
	printf("%d\n", res); 
	return 0; 
} 
