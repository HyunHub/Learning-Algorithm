#include <stdio.h>
#include <vector>
#include <algorithm>

#include<stack> // ���⿡�� ��������  
using namespace std;

// K���� ��� 

//int stack[100], top=-1;

//void push(int x) {
//	stack[++top]=x;
//}
//
//int pop() {
//	return stack[top--];
//}
int main() {
	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	
	while(n>0) {
//		push(n%k);
//		n=n/k;
		s.push(n%k);
		n=n/k;
	}
	
//	while(top!=-1){
	while(!s.empty()) { //��������� true - ��� while�� �����ż� ���� 
//		printf("%c", str[pop()]); 
		printf("%c", str[s.top()]); // �� ���� �� return
		s.pop(); // ������ ������  
	}
	
	return 0;
}
