#include <stdio.h>
#include <vector>
#include <algorithm>
#include<stack> 
using namespace std;

// ����Լ� �м�(stack�� �̿��ϴ� ���)  
 
void recur(int x) {
	if(x==0) return;
	else {
		recur(x-1);
		printf("%d ", x);
	}
	
}

int main() {
	
	int n;
	scanf("%d", &n);
	recur(n);
	
	return 0; 
}
