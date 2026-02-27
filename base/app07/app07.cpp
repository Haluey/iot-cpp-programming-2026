// inline 함수
// 매크로 함수의 장점은 취하고 단점은 보완한 함수
// template
// inline 함수의 단점인 자료형에 독립적이지 못한 부분을 보완해줌
// 각 자료형별로 선언할 필요없이
// template으로 자료형에 상관없이 입력할 수 있음

#include <iostream>

template <typename T>
inline T SQUARE(T x) {
	return x * x;
}

int main(void) {
	std::cout << SQUARE(12) << std::endl;
	std::cout << SQUARE(3.14) << std::endl;

	return 0;
}