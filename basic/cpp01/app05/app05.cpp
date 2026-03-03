// 함수 오버로딩
// 함수의 이름은 같고 입력값이 다를 경우를 말함
// C에서의 함수 구별 기준 : 이름
// C++에서의 함수 구별 기준 : 이름, 입력 (출력은 포함 X)
// 1. 매개변수의 수가 다를 때
// 2. 매개변수의 수는 같고 매개변수의 자료형만 다를 때

#include <iostream>

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

int main(void) {
	MyFunc(20);

	MyFunc(30, 40);

	return 0;
}