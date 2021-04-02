#include<stdio.h>
using namespace std;

// 영어 단어 복구 

int main() {
	
	char a[101];
	char b[101];
	int i, p=0; 
	
	// 띄어쓰기가 있으면 scanf로 읽을 수 없음 
	// scanf("%[^\n]s")
	gets(a); //bE       au     T I  fu    L 입력 
	
	 
	for(i = 0; a[i]!= '\0'; i++) {
		if(a[i] != ' ') { // 공백이 아니면 
			if(a[i] >=65 && a[i] <= 90) { // 대문자면
			 b[p++] = a[i] + 32; // A -> 65 a -> 97 32 차이
		}
			else b[p++] = a[i];
	}
}
	
	b[p] = '\0';
	printf("%s\n", b);
}

