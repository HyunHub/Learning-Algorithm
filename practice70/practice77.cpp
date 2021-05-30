//#include <stdio.h>
//#include <queue>
//#include <vector>
//#include <algorithm> 
#include <iostream>
using namespace std;
int unf[1001]; // 1���� ���·� Tree ����  

// ģ���ΰ� (Disjoint-set : Union&Find)

int Find(int v){ // v��� �л��� ���չ�ȣ return  
//	if(v==unf[v]) return v;
//	else return Find(unf[v]);

	// ��� ����  
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
