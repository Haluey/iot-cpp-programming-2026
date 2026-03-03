// 상수 참조자 레퍼런스

#include <iostream>

using namespace std;

int main(void) {
	//int& ref = 4;		// 비const 참조에 대한 초기 값은 lvalue(변수)여야 한다.
	//const int& ref = 4;	// 상수 레퍼런스로 선언하면 리터럴(집어넣는 값, 상수로 봐도 됨)도 참조할 수 있다.
	// 4가 임시객체로 바뀜
	int&& ref = 4;		// rvalue는 & 2개, lvalue는 & 1개

	cout << "ref : " << ref << endl;

	return 0;
}