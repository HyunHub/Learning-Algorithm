#include<stdio.h>
using namespace std;

// ���� �ܾ� ���� 

int main() {
	
	char a[101];
	char b[101];
	int i, p=0; 
	
	// ���Ⱑ ������ scanf�� ���� �� ���� 
	// scanf("%[^\n]s")
	gets(a); //bE       au     T I  fu    L �Է� 
	
	 
	for(i = 0; a[i]!= '\0'; i++) {
		if(a[i] != ' ') { // ������ �ƴϸ� 
			if(a[i] >=65 && a[i] <= 90) { // �빮�ڸ�
			 b[p++] = a[i] + 32; // A -> 65 a -> 97 32 ����
		}
			else b[p++] = a[i];
	}
}
	
	b[p] = '\0';
	printf("%s\n", b);
}

