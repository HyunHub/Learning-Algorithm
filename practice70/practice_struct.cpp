#include <iostream>
#include <vector>
using namespace std;
struct Loc{
	int x, y, z;
	Loc(int a, int b, int c){
		x =a;
		y=b;
		z=c;
	}
	// 연산자 오버로딩
	// 구조체를 주소로 받고 정렬 기준을 만듦   
	// b에 의해 원본을 바꿀 수 없게 하기 위해 const 
	// 함수 뒤에 const 붙여줘서 이 함수는 상수멤버함수
	// 멤버변수값인 x, y, z를 바꿔줄 수 없음  
	bool operator<(const Loc &b)const {
		// x값에 의해 정렬 
		// 선형으로 일자로 쭉 그었을 때  
		//  앞에 있는 x는 함수를 호출한 객체의 멤버 x
		// b.x는 그은 선의 뒤쪽에 있음 
		// 즉 앞에 게 작고 뒤에 게 크다 니까 오름차순  
		return x<b.x;
	}
};

int main() {
		// 벡터에 구조체 5개 넣음  
		vector<Loc> XY;
		XY.push_back(Loc(2, 3, 5));
		XY.push_back(Loc(3, 6, 7));
		XY.push_back(Loc(2, 3, 1));
		XY.push_back(Loc(5, 2, 3));
		XY.push_back(Loc(3, 1, 6));
		for(auto pos : XY) cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<endl;
		
		return 0; 
} 
