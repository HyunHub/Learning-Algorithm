#include <stdio.h>
using namespace std;

// 모두의 약수 - 제한시간 1초 
int cnt[50001]; 
int main() {
	// 이렇게 하면 1초가 넘음  
//	int num, i, j, result;
//	scanf("%d", &num);
//	
//	for(i = 1; i<= num; i++){
//		for(j = 1; j<=i; j++) {
//			if(i%j == 0) {
//				result++;
//			} 
//		}
//		printf("%d ", result);
//		result =0;
//	}
 
	// 1은 모든 수의 약수
	// 2를 약수로 가지려면 2의 배수
	// j = j+i 
	
	int n, i, j;
	scanf("%d", &n);
	for(i = 1; i<=n; i++) {
		for(j = i; j <=n; j= j+i) {
			cnt[j]++;
		}
	}
	for(i =1; i <=n; i++){
		printf("%d ", cnt[i]);
	}
	
	return 0;
} 
