//#include <stdio.h>
//#include <queue>
//#include <vector>
//#include <algorithm> 
#include <iostream>
using namespace std;
int unf[1001]; // 1차원 형태로 Tree 구현  

// 친구인가 (Disjoint-set : Union&Find)

int Find(int v){ // v라는 학생의 집합번호 return  
//	if(v==unf[v]) return v;
//	else return Find(unf[v]);

	// 경로 압축  
	if(v==unf[v]) return v;
	else return unf[v]=Find(unf[v]);
}

void Union(int a, int b){
	a=Find(a);
	b=Find(b);
	if(a!=b) unf[a]=b;
}

int main() {
	ios_base::sync_with_stdio(false);
	
	int n, m, a, b;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		unf[i] = i;
	}
	
	for(int i=1; i<=m; i++) {
		cin>>a>>b;
		Union(a, b);
	}
	cin>>a>>b;
	a=Find(a);
	b=Find(b);
	if(a==b) cout << "YES";
	else cout<<"NO";
	return 0;
} 
