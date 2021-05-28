#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
struct Loc{
	int x, y, z;
	Loc(int a, int b, int c){
		x =a;
		y=b;
		z=c;
	}
	// ������ �����ε�
	// ����ü�� �ּҷ� �ް� ���� ������ ����   
	// b�� ���� ������ �ٲ� �� ���� �ϱ� ���� const 
	// �Լ� �ڿ� const �ٿ��༭ �� �Լ��� �������Լ�
	// ����������� x, y, z�� �ٲ��� �� ����  
	bool operator<(const Loc &b)const {
		// x���� ���� ���� 
		// �������� ���ڷ� �� �׾��� ��  
		//  �տ� �ִ� x�� �Լ��� ȣ���� ��ü�� ��� x
		// b.x�� ���� ���� ���ʿ� ���� 
		// �� �տ� �� �۰� �ڿ� �� ũ�� �ϱ� ��������  
		// return x<b.x;
		// ���������� x>b.x  
		
		// ȣ���� ��ü�� ���ڷ� �Ѿ�� ��ü�� ���� ������ 
		if(x!=b.x) return x<b.x;
		// ����� ���� ���� �� ���� �� �ǰ� ������� �ʾƼ� �°�    
		if(y!=b.y) return y<b.y;
		if(z!=b.z) return z<b.z;
		
	}
};

int main() {
		// ���Ϳ� ����ü 5�� ����  
		vector<Loc> XY;
		XY.push_back(Loc(2, 3, 5));
		XY.push_back(Loc(3, 6, 7));
		XY.push_back(Loc(2, 3, 1));
		XY.push_back(Loc(5, 2, 3));
		XY.push_back(Loc(3, 1, 6));
		sort(XY.begin(), XY.end()); // vector ���� 
		for(auto pos : XY) cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<endl;
		
		return 0; 
} 
