#include <iostream>
using namespace std;

//1. 1���� N������ M�� ��� �� 

int main() {
	int n, m, i, sum =0;
	cin>> n >> m;
	
	for(i = 1; i<= n; i++) {
		if(i%m == 0) {
			sum += i;
		}
		
	}
	
	cout << sum;
	return 0;
	
}
