#include <stdio.h>
#include <vector>
#include <algorithm>
#include<stack> 
using namespace std;

// 재귀함수 분석(stack을 이용하는 재귀)  
 
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
