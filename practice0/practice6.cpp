#include<stdio.h>
using namespace std;

// ���ڸ� ����
 
int main() {
	//freopen("input3.txt", "rt", stdin);
	char a[100];
	int result = 0, cnt=0, i;
	scanf("%s", &a); // g0en2Ts8eSoft �Է�
	
	// ���ڿ��� ������ \0�� ��������ϱ�,, 
	for(i =0; a[i]!='\0'; i++) {
		// ASCII Num  
		if(a[i] >= 48 && a[i] <=57){
			result= result*10+(a[i]-48);
		}
	} 
	
	printf("%d\n", result);
	
	for(i =1; i<=result; i++) {
		if(result % i == 0) {
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
