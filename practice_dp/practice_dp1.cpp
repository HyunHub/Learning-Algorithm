//#include <stdio.h>
//#include <queue>
//#include <vector>
//#include <algorithm> 
#include <iostream>
//#include<bits/stdc++.h> 
#include <fstream>
#include <map>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	// ifstream cin;
	// cin.open("input.txt");
	
	map<char, int> ch; // 균형잡힌 2진 트리로 생성  
	map<char, int>::iterator it; // map 접근 가능
	char a[100];
	cin >> a;
	for(int i=0; a[i]!='\0'; i++){
		ch[a[i]]++;
	}
	
	//ch.end()는 마지막 자료의 바로 뒤 가리킴  
	for(it=ch.begin(); it!=ch.end(); it++){
		cout<<it->first<<" "<<it->second<< "\n";
	}
	
	
	return 0;
}


