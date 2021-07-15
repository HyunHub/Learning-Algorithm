//#include <stdio.h>
//#include <queue>
//#include <vector>
//#include <algorithm> 
//#include <iostream>
#include<bits/stdc++.h> 
//#include <fstream>
//#include <map>
//#include <string> 
using namespace std;

// 동전 교환 (냅색 알고리즘)
 
int main() {
	ios_base::sync_with_stdio(false);
	int n, m;
	cin>>n;
	vector<int> coin(n);
	for(int i=0; i<n; i++) cin>>coin[i];
	cin>>m;
	vector<int> dy(m+1, 1000);
	dy[0]=0;
	
	for(int i=0; i<n; i++){
		for(int j=coin[i]; j<=m; j++){
			dy[j]=min(dy[j], dy[j-coin[i]]+1);
		}
	}
	
	cout<<dy[m];
	
	return 0;
}
