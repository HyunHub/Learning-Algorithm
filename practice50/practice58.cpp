#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 이진트리 깊이우선탐색(DFS: Depth First Search)
 
void D(int v) {
	if(v>7) return;
	else {
		printf("%d ", v); // 전위순회  
		D(v*2);
		printf("%d ", v); // 중위순회  
		D(v*2+1);
		printf("%d ", v); // 후위순회 
	}
}

int main() {
	D(1);
	return 0;
}
