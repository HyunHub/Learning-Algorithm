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
	
	map<string, int> ch; // 균형잡힌 2진 트리로 생성  
	map<string, int>::iterator it; // map 접근 가능
	string a;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a;
		ch[a]++; // 단어가 key가 되고 value 증가  
	}
	
	int max=0;
	string res;
	
	//ch.end()는 마지막 자료의 바로 뒤 가리킴  
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


