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
	
	map<char, int> ch; // �������� 2�� Ʈ���� ����  
	map<char, int>::iterator it; // map ���� ����
	char a[100];
	cin >> a;
	for(int i=0; a[i]!='\0'; i++){
		ch[a[i]]++;
	}
	
	//ch.end()�� ������ �ڷ��� �ٷ� �� ����Ŵ  
	for(it=ch.begin(); it!=ch.end(); it++){
		cout<<it->first<<" "<<it->second<< "\n";
	}
	
	
	return 0;
}


