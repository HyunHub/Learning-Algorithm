//#include <stdio.h>
//#include <queue>
//#include <vector>
//#include <algorithm> 
#include <iostream>
//#include<bits/stdc++.h> 
#include <fstream>
#include <map>
#include <string> 
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	// ifstream cin;
	// cin.open("input.txt");
	
	map<string, int> ch; // �������� 2�� Ʈ���� ����  
	map<string, int>::iterator it; // map ���� ����
	string a;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a;
		ch[a]++; // �ܾ key�� �ǰ� value ����  
	}
	
	int max=0;
	string res;
	
	//ch.end()�� ������ �ڷ��� �ٷ� �� ����Ŵ  
	for(it=ch.begin(); it!=ch.end(); it++){
		cout<<it->first<<" "<<it->second<< "\n";
		if(it->second>max) {
			max = it->second;
			res = it->first;
		}
	}
	
	cout<< res << " : " << max << "\n";
	
	
	return 0;
}


