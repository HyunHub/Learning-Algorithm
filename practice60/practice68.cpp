#include <stdio.h>
#include <vector>
#include <algorithm>

// first second ��� �� �� ���� 
//#define x first
//#define y second

using namespace std;

// �ּ� ��� (DFS : ����ġ ���� �׷��� ���� ����Ʈ)
// vector, STL pair  

int ch[30], total=2147000000, n;
vector<pair<int, int> > map[30];

void DFS(int v, int t) {
	int i;
	if(v==n){ // ������ 
		if(total > t) {
			total = t;
		}
	}
	else {
		for(i=0; i< map[v].size(); i++) {
			if(ch[map[v][i].first] ==0){
				ch[map[v][i].first] =1;
				DFS(map[v][i].first, t+map[v][i].second); 
				ch[map[v][i].first] =0;
			}
		}
	} 
}
int main() {
	
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
	}
	
	ch[1]= 1;
	DFS(1, 0);
	printf("%d\n", total);
	
	return 0;
} 
