#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
using namespace std;

// ���װ��(�޸������̼�)

int dy[21][21]; // �迭�� �����صּ� �� ������� �ʰ�  
int DFS(int n, int r) {
	if(dy[n][r]>0) return dy[n][r];
	if(n==r || r==0) return 1;
	else return dy[n][r]=DFS(n-1, r-1) + DFS(n-1, r);
}
int main() {
	
//	int n, r, res=1;
//	
//	scanf("%d %d", &n, &r);
//	
//	int v = n-r;
//	
//	if(n<r) return 0;
//	
//	while(r>0) {
//		while(n>v){
//			res *= n;
//			n--;
//		}
//		res /= r;
//		r--;
//	} 
//	
//	printf("%d", res);

	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", DFS(n, r));
	
	return 0;
}
