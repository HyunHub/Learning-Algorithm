#include <stdio.h>
using namespace std;

// �ùٸ� ��ȣ

int main() {
	char a[100];
	int i, cnt=0;
	scanf("%s", &a);
	
	// 1. ���� ��ȣ���� cnt ���� �ݴ� ��ȣ ����
	// cnt 0�� ��� ���� ����
	// 2. cnt�� - �� �Ǹ� �ùٸ� ��ȣ �ƴ� break 
	for(i=0; a[i]!='\0'; i++) {
		if(a[i] == '(') cnt++;
		else if(a[i] == ')') cnt--;
		if(cnt <0) break;
	}
	
	if(cnt == 0) printf("YES\n");
	else printf("NO\n");  
	
	return 0;
}


