#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 연속된 자연수의 합 
 
int main() {
	
	int a, b=1, cnt=0, tmp, i;
	
	scanf("%d", &a); //15
	 
	tmp = a;
	
	a--; // 14
	while(a>0) {
		b++; // 2  3
		a= a-b; // 12  9
		if(a % b == 0) { // o  o  
			for(i=1; i<b; i++) {
				printf("%d + ", (a/b)+i); // 7  4 + 5
			}
			printf("%d = %d\n", (a/b)+i, tmp); // 8  6
			cnt++;
		} 
	} 
	 
	return 0;
	
}
