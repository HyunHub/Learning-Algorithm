#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm> 
using namespace std;

// 최대 수입 스케쥴(priority queue greedy: 구조체와 Vector를 이용한 정렬)

struct Data{
	int money;
	int when;
	Data(int a, int b){
		money=a;
		when=b;
	}

	bool operator<(Data &b){
	 	return when>b.when;
	}
};

int main() {
	
	int n, i, j, a, b, res=0, max=-2147000000;
	vector<Data> T;
	priority_queue<int> pQ;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d %d", &a, &b);
		T.push_back(Data(a,b));
		if(b>max) max=b; // max 부터 스케쥴링
	}
	sort(T.begin(),T.end());
	j=0;
	for(i=max; i>=1; i--) {
		for( ; j<n; j++) {
			if(T[j].when<i) break; // 현재 날짜보다 작으면  
			pQ.push(T[j].money);
		}
		if(!pQ.empty()){
			res+=pQ.top();
			pQ.pop();
		}
	}
	
	printf("%d\n", res);
	
	return 0; 
} 
