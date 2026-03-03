// 이니셜라이저

#include <iostream>

using namespace std;

class Time {
private:
	int m_hour;
	int m_min;
	int m_sec;

public:
	Time() {	// 명시적 디폴트 생성자
		cout << "기본생성자 호출!!" << endl;
	}
	Time(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {	// 이니셜라이저(콜론)를 쓴 초기화
		cout << "입력 3가지 생성자 호출!!" << endl;
		//m_hour = h;
		//m_min = m;
		//m_sec = s;
	}
	void setTime(int h, int m, int s) {
		m_hour = h;
		m_min = m;
		m_sec = s;
	}
	void showTime() {
		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
	}
};

int main(void) {
	Time now;
	now.setTime(16, 55, 42);
	now.showTime();

	Time t1(16, 59, 14);
	t1.showTime();
	return 0;
}