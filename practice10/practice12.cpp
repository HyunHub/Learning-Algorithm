#include <stdio.h>
using namespace std;

// 숫자의 총 개수(large)

int main() {
	
	int n, sum=0, c=1, d=9, res=0;
	
	scanf("%d", &n);
	
	// sum + 자릿수의 개수(d)  
	while(sum+d<n){
		res = res + (c*d);
		sum = sum +d;
		// 두자리수  
		c++; 
		d = d*10;
	}
	res = res + ((n-sum)*c);
	
	printf("%d", res);
	return 0;
} 
