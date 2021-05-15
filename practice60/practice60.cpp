#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// 합이 같은 부분집합(DFS) 

int n, a[11], total=0;
bool flag=false;
void DFS(int L, int sum) {
	// 재귀함수가 return; 하면 자기 자신만 종료되고
	// 자기를 호출한 재귀함수의 스택프레임으로 이동  
	if(sum > (total/2)) return; 
	if(sum==(total-sum)) {
		flag=true; 
		return;
	} 
	// 스택에 쌓여있는 모든 재귀함수 프레임
	// 연달아 종료  
	if(flag==true) return; 
	if(L==n+1) { // 부분집합 하나가 완성되는 지점  
		if(sum==(total-sum)) {
			flag=true; // yes
			return;
		}
	}
	else {
		DFS(L+1, sum+a[L]); // a[L]이라는 원소를 사용한다  
		DFS(L+1, sum); // 사용하지 않는다  
	}
}

int main() {
	
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}
	
	DFS(1,0);
	
	if(flag) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
