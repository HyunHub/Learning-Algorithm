#include<stdio.h>
 
 // ���� ���� ���� �ڸ��� 
 
int ch[10]; // �������� 0���� �ʱ�ȭ  
int main() {
	int i, digit, max = -2147000000, res;
	char a[101];
	
	scanf("%s", &a);
	
	for(int i=0; a[i] != '\0'; i++) {
		digit = a[i]-48;
		ch[digit]++;
	}
	
	for(int i = 0; i<10; i++) {
		if(ch[i]>= max) {
			max = ch[i]; // �� �ڸ����� ���� Ƚ��  
			res = i; // ���� �ڸ��� ����  
		}
	}
	
	printf("%d", res);
	return 0;
}
