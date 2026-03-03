// C++ 클래스
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Human {
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(){}	// 사용자가 만든 디폴트생성자?
	Human(const char* aname, int aage, const char* ajob) {	// const를 넣어야 오류안남
		strcpy(name, aname);
		age = aage;
		strcpy(job, ajob);
	}
	void show() {
		cout << "이름 : " << name << ", 나이 : " << age << ", 직업 : " << job << endl;
	}
};

int main(void) {
	Human h("홍길동", 30, "학생");	// private이기 때문에 생성안됨
	//Human h1();
	Human h1;	// 디폴트 생성자 호출할 때 사용?
	h1.show();

	return 0;
}