#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// ���� ���� �κ�����(DFS) 

int n, a[11], total=0;
bool flag=false;
void DFS(int L, int sum) {
	// ����Լ��� return; �ϸ� �ڱ� �ڽŸ� ����ǰ�
	// �ڱ⸦ ȣ���� ����Լ��� �������������� �̵�  
	if(sum > (total/2)) return; 
	if(sum==(total-sum)) {
		flag=true; 
		return;
	} 
	// ���ÿ� �׿��ִ� ��� ����Լ� ������
	// ���޾� ����  
	if(flag==true) return; 
	if(L==n+1) { // �κ����� �ϳ��� �ϼ��Ǵ� ����  
		if(sum==(total-sum)) {
			flag=true; // yes
			return;
		}
	}
	else {
		DFS(L+1, sum+a[L]); // a[L]�̶�� ���Ҹ� ����Ѵ�  
		DFS(L+1, sum); // ������� �ʴ´�  
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
