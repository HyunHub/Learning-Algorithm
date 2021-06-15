//#include <stdio.h>
//#include <queue>
#include <vector>
#include <algorithm> 
#include <iostream>
// #include<bits/stdc++.h> 
using namespace std;

// 조합 구하기 Combination 

int n, r;
int ch[20];

void DFS(int s, int L) {
	if(L==r) {
		for(int j=0; j<L; j++){
			cout << ch[j] << " ";
		}
		cout<<endl;
	}
	
	else{
		for(int i=s; i<n; i++) {
			ch[L]=i;
			DFS(i+1, L+1);
		}
	}
} 

int main() {
	cin>>n>>r;
	DFS(0,0);
	return 0;
}


