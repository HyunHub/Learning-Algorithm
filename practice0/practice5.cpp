#include<stdio.h>
using namespace std;

// 나이 계산 (문자열 컨트롤)

int main() {
	
	freopen("input2.txt", "rt", stdin);

	char a[20];
	int year, age;
	scanf("%s", &a); // 주민등록번호가 들어감
	
	if(a[7] == '1' || a[7] == '2') 
	year=1900+((a[0]-48)*10 + (a[1]-48));
	else year = 2000 + ((a[0]-48)*10 + (a[1]-48));
	age = 2021-year+1;
	
	printf("%d", age);
	
	if(a[7] == '1' || a[7] == '3') 
	printf(" M\n");
	else printf(" W\n");
	
	return 0;
	
} 

 
