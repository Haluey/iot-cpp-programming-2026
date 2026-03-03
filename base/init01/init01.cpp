// 초기화하는 4가지 방법

#include <iostream>

using namespace std;

int main(void) {
	// 10이라는 것을 복사해서 num에 대입
	int num = 10;	// 대입연산자로 초기화 -> 복사생성자 호출로 객체 생성
	int num1(10);	// 직접할당해서 초기화로 객체 생성

	int num2{ 10 };	// 중괄호 직접 초기화
	int num3 = { 10 };	// 중괄호 복사생성자 초기화 -> 복사생성자 호출

	int x = 3.14;	// 묵시적 정의 가능
	//int x1{ 3.14 };	// 묵시적 정의 불가능

	cout << x << endl;
	//cout << x1 << endl;

	return 0;
}