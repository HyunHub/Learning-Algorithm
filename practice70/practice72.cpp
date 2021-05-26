#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 공주 구하기(queue)
 
int main() {
	
	int n, k, i;
	queue<int> Q;
	scanf("%d %d", &n, &k);
	for(i=1; i<=n; i++) {
		Q.push(i);
	}
	
	while(!Q.empty()) {
		for(i=1; i<k; i++) {
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		if(Q.size()==1) {
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
	
	return 0;
}
