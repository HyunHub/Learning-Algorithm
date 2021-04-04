#include<stdio.h>
 
 // 가장 많이 사용된 자릿수 
 
int ch[10]; // 전역변수 0으로 초기화  
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
			max = ch[i]; // 그 자릿수가 사용된 횟수  
			res = i; // 실제 자릿수 숫자  
		}
	}
	
	printf("%d", res);
	return 0;
}
