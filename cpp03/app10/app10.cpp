// rvlaue

#include <iostream>

using namespace std;

int main(void) {
	int a = 10;
	int& ra = a;

	int&& rra = 10;

	cout << a << ',' << ra << ',' << rra << endl;
	cout << &a << ',' << &ra << ',' << &rra << endl;

	return 0;
}