// 상수멤버와 참조자일 때 초기화

#include <iostream>

using namespace std;

class constSome {	// 상수멤버 초기화
public:
	const int value;	// 상수는 선언할 때 반드시 같이 초기화되어야됨. 대입연산자 쓰면 안됨
	constSome(int i) : value(i) {}
	void show() { printf("value : %d\n", value); }
};
class refSome {		// 레퍼런스 멤버 초기화
public:
	int& ri;
	refSome(int i) : ri(i) {}
	void show() { printf("ri : %d\n", ri); }
};

int main(void) {
	constSome cs(10);
	cs.show();

	int i = 5;
	refSome rs(i);
	rs.show();

	return 0;
}