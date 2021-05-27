#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// 최소힙(priority_queue : 우선순위 큐)
// 루트가 최소값, 음수로 바꿔서 넣고 출력   

int main() {
	
	int a;
	priority_queue<int> pQ;
	while(true) {
		scanf("%d", &a);
		if(a==-1) break;
		if(a==0) {
			if(pQ.empty()) printf("-1\n");
			else {
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
		}
		else pQ.push(-a);
	}
	
	return 0;
} 
