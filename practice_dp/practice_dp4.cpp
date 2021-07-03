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

// 네트워크 선 자르기 Top-Down : 재귀, 메모이제이션 

int dy[101]; // 메모이제이션  

int DFS(int n){
	
	if(dy[n]>0) return dy[n];
	if(n==1 || n==2) return n;
	else return dy[n]=DFS(n-1)+DFS(n-2);
}
int main() {
	
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	cout<<DFS(n);
	return 0;
}
