#include <stdio.h>
using namespace std;

// ����� ��� - ���ѽð� 1�� 
int cnt[50001]; 
int main() {
	// �̷��� �ϸ� 1�ʰ� ����  
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
 
	// 1�� ��� ���� ���
	// 2�� ����� �������� 2�� ���
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
