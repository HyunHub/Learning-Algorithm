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

// �˸��ٹٿ� 40���� ���� Top-Down 

int arr[21][21], dy[21][21];

int DFS(int x, int y){
	if(dy[x][y]>0) return dy[x][y];
	if(x==0 && y==0) return arr[0][0];
	else {
		if(y==0) return dy[x][y] = DFS(x-1, y)+arr[x][y];
		else if(x==0) return dy[x][y] =DFS(x, y-1)+arr[x][y];
		else return dy[x][y] =min(DFS(x-1,y), DFS(x,y-1))+arr[x][y];
	}
}
int main() {
	
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<DFS(n-1, n-1);
	return 0;
}
