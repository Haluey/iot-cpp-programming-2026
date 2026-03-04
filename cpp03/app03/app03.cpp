// 복사생성자 02
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Person {
	char m_name[20];
	int m_age;

public:
	Person(const char* name, int age) {		// constructor
		printf("constructor!!\n");
		strcpy(m_name, name);
		m_age = age;
	}
	// 객체를 복사하여 초기화하므로 복사생성자 호출
	// 입력이나 출력이 객체일 때는 복사생성자 호출
	// 복사생성자 인수는 상수 레퍼런스 사용
	Person(const Person& other) {			// copy constructor
		printf("copy constructor!!\n");
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	~Person() {								// 소멸자
		printf("나는 소멸자입니다!!\n");
	}
	void showPerson() {
		printf("이름 : %s, 나이 : %d\n", m_name, m_age);
	}
};

int main() {
	Person m("홍길동", 50);
	m.showPerson();

	Person copym(m);
	copym.showPerson();

	Person copym1 = m;
	copym1.showPerson();

	return 0;
}

/*
* 기본 생성자, 기본복사 생성자, 소멸자는 디폴트로 제공된다.
*/