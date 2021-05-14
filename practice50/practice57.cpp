#include <stdio.h>
#include <vector>
#include <algorithm>
#include<stack> 
using namespace std;

// 재귀함수 이진수 출력 
 
void D(int x) {
	
	if(x==0) return;
	else {
		D(x/2);
		printf("%d", x%2);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	D(n);
	return 0;
}
