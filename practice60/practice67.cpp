#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// �ּ� ��� (DFS : �������) 

int ch[30], total=2147000000, n;
int map[30][30];

void DFS(int v, int t) {
	int i;
	if(v==n){ // ������ 
		if(total > t) {
			total = t;
		}
	}
	else {
		for(i=1; i<= n; i++) {
			if(ch[i]==0 && map[v][i] > 0){
				ch[i] =1;
				DFS(i, t+map[v][i]); // v�ϰ� ����� ��� ��ȣ  
				ch[i] =0;
			}
		}
	} 
}
int main() {
	
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}
	
	ch[1]= 1;
	DFS(1, 0);
	printf("%d\n", total);
	
	return 0;
} 
