// 참조자1

#include <iostream>

using namespace std;

// 매개변수가 int n이면 값이 안 바뀜
void change_val(int& n) {	// 참조 매개변수
	n = 20;
}

int main(void) {
	int num = 10;
	cout << num << endl;

	change_val(num);
	cout << num << endl;

	return 0;
}