// 참조자2

#include <iostream>

using namespace std;

int main(void) {
	int num = 10;
	int& ref = num;		// 참조변수
	int* pnum = &num;	// 포인터변수

	num++;		// 11
	ref++;		// 12
	(*pnum)++;	// 13, *pnum++ : 괄호가 없으면 주소값이 증가하고 그 주소를 참조함.

	cout << "num : " << num << endl;
	cout << "ref : " << ref << endl;
	cout << "*pnum : " << *pnum << endl;

	// 참조 : 보이지않는 포인터라 생각
	cout << "&num : " << &num << endl;
	cout << "&ref : " << &ref << endl;

	return 0;
}