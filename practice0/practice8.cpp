#include <stdio.h>
using namespace std;

// 올바른 괄호

int main() {
	char a[100];
	int i, cnt=0;
	scanf("%s", &a);
	
	// 1. 여는 괄호에는 cnt 증가 닫는 괄호 감소
	// cnt 0일 경우 갯수 맞음
	// 2. cnt가 - 가 되면 올바른 괄호 아님 break 
	for(i=0; a[i]!='\0'; i++) {
		if(a[i] == '(') cnt++;
		else if(a[i] == ')') cnt--;
		if(cnt <0) break;
	}
	
	if(cnt == 0) printf("YES\n");
	else printf("NO\n");  
	
	return 0;
}


