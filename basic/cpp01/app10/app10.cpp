// 새로운 자료형 bool
// true == "참"
// false == "거짓"

#include <iostream>

using namespace std;

int main(void) {
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false : " << false << endl;

	while (true) {
		cout << i++ << ' ';
		if (i > num) break;
	}

	cout << endl;

	cout << "sizeof(1) : " << sizeof(1) << "byte" << endl;
	cout << "sizeof(0) : " << sizeof(0) << "byte" << endl;
	cout << "sizeof(true) : " << sizeof(true) << "byte" << endl;
	cout << "sizeof(false) : " << sizeof(false) << "byte" << endl;

	return 0;
}