#include <stdio.h>
using namespace std;

// ������ �� ����(small)

int main() {
	
	int num, sum=0, tmp;
	
	scanf("%d", &num);
	
	for(int i=1; i<=num; i++) {
		tmp = i;
		while(tmp >0) {
			tmp = tmp/10;
			sum++;
		}
	}
	
	printf("%d", sum);
	return 0;
} 
