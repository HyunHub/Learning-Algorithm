#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// �� ���� ��հ� ���� ����� ��
int a[10][10];
int main() {
	//freopen("input4.txt", "rt", stdin);
	int i, j, sum, avg, min, tmp, res;
	
	for(i=1;i<=9;i++) {   
		sum=0;
		for(j=1;j<=9;j++) {
			scanf("%d", &a[i][j]);
			sum=sum+a[i][j];
		}
		avg=(sum/9.0)+0.5; // �Ǽ� + 0.5 - �ݿø� -> int
		printf("%d ", avg);
		min=2147000000;
		for(j=1; j<=9; j++){
			tmp=abs(a[i][j] - avg); // ���밪 algorithm 
			if(tmp < min) {
				min=tmp;
				res=a[i][j];
			}
			else if(tmp == min) {
				if(a[i][j]>res) res=a[i][j];
			}
		}
		printf("%d\n", res);
	}
	
	return 0;
	
} 
