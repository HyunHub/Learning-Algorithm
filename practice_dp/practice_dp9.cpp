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

// 가방 문제 ( 냅색 알고리즘 ) 
 
int main() {
	
	ios_base::sync_with_stdio(false);
	int n, m, w, v;
	cin>>n>>m;
	vector<int> dy(m+1, 0);
	for(int i=0; i<n; i++){
		cin>>w>>v;
		for(int j=w; j<=m; j++){
			dy[j]=max(dy[j],dy[j-w]+v);
		}
	}
	cout<<dy[m];
	return 0; 
}
