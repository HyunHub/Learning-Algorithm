#include <stdio.h>
using namespace std;

// 자릿수의 합

int digit_sum(int x) {
	int tmp, sum =0;
	while(x >0) {
		tmp= x%10;
		sum += tmp;
		x= x/10;
	}
	return sum;
}

int main(){
	
	int n, num, i, sum, max=-2147000000, res;
	
	scanf("%d", &n);
	
	for(int i = 0; i<n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if(sum > max) {
			max = sum;
			res = num;
		}
		else if(sum == max) { // 자릿수의 합이 같으면 큰 수 출력
			if(num > res) res = num;
		}
	}
	
	printf("%d", res);
	
	return 0;
}
