#include <stdio.h>
using namespace std;

// ������ �� ����(large)

int main() {
	
	int n, sum=0, c=1, d=9, res=0;
	
	scanf("%d", &n);
	
	// sum + �ڸ����� ����(d)  
	while(sum+d<n){
		res = res + (c*d);
		sum = sum +d;
		// ���ڸ���  
		c++; 
		d = d*10;
	}
	res = res + ((n-sum)*c);
	
	printf("%d", res);
	return 0;
} 
