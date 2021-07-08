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

// 알리바바와 40인의 도둑 Bottom-Up

int arr[21][21], dy[21][21];
int main() {
	ios_base::sync_with_stdio(false);
	int n, cnt=0;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	} 
	dy[0][0]=arr[0][0];
	for(int i=0; i<n; i++){
		dy[0][i]=dy[0][i-1]+arr[0][i];
    	dy[i][0]=dy[i-1][0]+arr[i][0];
	}
	
	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			dy[i][j]=min(dy[i-1][j], dy[i][j-1])+arr[i][j];
		}
	}
	cout<<dy[n-1][n-1];
	
	return 0;
	
}
