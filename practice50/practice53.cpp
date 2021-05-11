#include <stdio.h>
#include <vector>
#include <algorithm>

#include<stack> // 여기에서 지원해줌  
using namespace std;

// K진수 출력 

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
	while(!s.empty()) { //비어있으면 true - 비면 while문 거짓돼서 끝남 
//		printf("%c", str[pop()]); 
		printf("%c", str[s.top()]); // 맨 나중 거 return
		s.pop(); // 실제로 꺼내줌  
	}
	
	return 0;
}
