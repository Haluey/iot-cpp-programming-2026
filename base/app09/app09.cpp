// const의 의미

#include <iostream>

using namespace std;

int main(void) {
	//int num1 = 10;
	//num1 = 20;
	//cout << num1 << endl;

	// 1. num2 상수화 - num2를 가지고 값 변경하지 마라
	//const int num2 = 10;
	//cout << num2 << endl;
	//num2 = 20;	// const로 설정했기 때문에 실행안됨


	// 2. 포인터변수로 값변경X, num2로는 값변경 가능
	int num2 = 20;
	const int* p1 = &num2;	
	cout << *p1 << endl;
	cout << num2 << endl;
	//*p1 = 10;		// 가리키고 있는 변수의 값 변경 불가

	int num3 = 22;
	p1 = &num3;		// 가리키는 변수 즉, 주소값 변경 가능
	cout << *p1 << endl;
	

	// 3. 포인터변수가 담고있는 주소 변경 불가
	int num4 = 40;
	int* const p2 = &num4;

	*p2 = 55;		// 가리키고 있는 변수의 값 변경 가능
	//p2 = &num3;	// 가리키는 변수 즉, 주소값 변경 불가

	cout << *p2 << endl;


	// 4. 
	const int* const ptr3 = &num4;
	// 가리키고 있는 변수의 값 변경 불가
	// 가리키는 변수 즉, 주소값 변경 불가

	return 0;
}