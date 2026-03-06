// C++에서 동적할당
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include <iostream>

int main(void) {
	int size;
	int* arr;

	cout << "배열크기 : "; cin >> size;
	arr = new int[size];	// c++에서 쓰는 동적할당 방법 : 포인터변수 = new 자료형[갯수];

	cout << "만든 배열크기 : " << sizeof(int) * size << endl;

	delete[] arr;	// 동적할당 해제

	return 0;
}