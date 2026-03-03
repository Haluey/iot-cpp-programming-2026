// 참조자

#include <iostream>

using namespace std;

// 매개변수에 &가 있거나 없어도 호출부분과 결과가 동일하기 때문에
int func(int n) {	// 정확히 알려면 선언부분을 봐야함
	n++;
	return n;
}

int& func1(int r) {	// 리턴 타입이 레퍼런스(즉, 출력이 레퍼런스)
	r++;
	return r;
}

int main(void) {
	int num = 10;

	int ret = func(num);
	cout << ret << endl;

	int res = func1(num);		// 복사해서 사용
	cout << res << endl;

	int& ref = func1(num);		// 참조사용	// 아직까지 "r"이 살아있는데
	cout << ref << endl;	// 여기서 "r"이 사라짐. 값은 출력이 됨


	return 0;
}