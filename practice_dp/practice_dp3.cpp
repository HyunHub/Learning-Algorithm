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

// 네트워크 선 자르기 Bottom-Up 

int dy[50];
int main() {
	
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	dy[1]=1;
	dy[2]=2;
	for(int i=3; i<=n; i++){
		dy[i] = dy[i-2]+dy[i-1];
	}
	
	cout<<dy[n];
	
	return 0;
}
