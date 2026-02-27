// 매개변수의 디폴트 값
// 함수의 매개변수에 디폴트 값을 설정하면
// 함수의 입력값을 넣지 않아도 실행 가능
// 단, 디폴트 값을 설정할 때 오른쪽(뒤)부터 채워야 함
// 함수를 호출할 때, 입력값이 왼쪽(앞)부터 채워지기 때문

#include <iostream>

int Adder(int num1 = 1, int num2 = 2);	// 함수 선언

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

// 함수 정의
int Adder(int num1, int num2) {
	return num1 + num2;
}