// 문자열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main(void) {
	char name[20] = "홍길동";
	char name1[20];

	strcpy(name1, "김영희");

	cout << "name : " << name << endl;
	cout << "name1 : " << name1 << endl;

	char name2[20];
	cout << "이름을 입력하세요 : "; cin >> name2;

	cout << "당신의 이름은 " << name2 << "입니다." << endl;

	return 0;
}