// 이니셜라이저
// 다른 클래스 객체를 사용하기 위해 초기화할 때 

#include <iostream>

class Position {
public:
	int m_x, m_y;
	Position(int x, int y) { m_x = x, m_y = y; }
};
class objSome {
public:
	Position p;	// 다른 클래스를 객체로 생성
	objSome(int x, int y) : p(x, y){}	// 멤버로 객체를 가질 때 콜론 초기화
	void show() {
		printf("%d %d\n", p.m_x, p.m_y);
	}
};

int main(void) {
	objSome os(10, 30);

	os.show();

	return 0;
}