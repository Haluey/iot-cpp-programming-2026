// 복사 생성자 중 깊은 복사(deep copy)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Person {
private:
	char* m_name;
	int m_age;

public:
	Person(const char* name, int age) {
		printf("생성자 호출!!\n");
		m_name = new char[strlen(name) + 1];	// 널문자까지 저장해야 되기 때문 -> + 1
		strcpy(m_name, name);
		m_age = age;
	}
	Person(const Person& other) {
		printf("복사 생성자 호출!!\n");
		m_name = new char[strlen(other.m_name) + 1];
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	~Person() {
		printf("소멸자 호출\n");
		delete[] m_name;
	}
	void showPerson() {
		printf("이름 : %s, 나이 : %d\n", m_name, m_age);
	}
};

int main(void) {
	Person man("홍길동", 50);
	man.showPerson();

	Person cpman(man);
	cpman.showPerson();

	return 0;
}