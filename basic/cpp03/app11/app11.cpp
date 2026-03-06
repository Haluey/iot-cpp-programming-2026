// 변환생성자 : 인자를 단 하나 가지는 생성자

#include <iostream>

class Time {
	int hour;
	int min;
	int sec;
public:
	Time() {}
	Time(int abssec) {		// 변환생성자. 기본적으로 제공X
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void outTime() {
		printf("입력한 시간은 %d시 %d분 %d초 입니다\n", hour, min, sec);
	}
};

int main(void) {
	Time now(4372);	// int형 4372이라는 정수가 time객체로 변함
	now.outTime();

	Time t;
	t.outTime();

	return 0;
}