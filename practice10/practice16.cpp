#include <stdio.h>
#include <algorithm> // exit(0)

// Anagram
// �빮�� 65-90 �ҹ��� 97-122  
int a[60], b[60];
int main() {
	char str[100];
	int i;
	
	scanf("%s", str);
	
	for(i=0; str[i]!='\0'; i++) {
		if(str[i] >= 65 && str[i] <=90) {
			a[str[i] - 64]++ ;
		}
		else a[str[i]-70]++;
	}	
	
	scanf("%s", str);
	
	for(i=0; str[i]!='\0'; i++) {
		if(str[i] >= 65 && str[i] <=90) {
			b[str[i] - 64]++ ;
		}
		else b[str[i]-70]++;
	}	
	
	for(i=1; i<=52; i++){
		if(a[i] != b[i]) {
			printf("NO\n");
			exit(0);
		} 
	}
	
	printf("YES\n");
	
	return 0;
}


