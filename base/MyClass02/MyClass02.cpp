// 생성자
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	MyClass(int aid, const char* aname, int aage);	// 생성자 선언(명시적으로)
	void show();
};
MyClass::MyClass(int aid, const char* aname, int aage) {	// 클래스 밖에서 생성자 정의
	id = aid;
	strcpy(name, aname);
	age = aage;
}
void MyClass::show() {
	cout << "학번 : " << id << ", 이름 : " << name << ", 나이 : " << age << endl;
}


int main(void) {
	MyClass obj(111, "홍길동", 22);

	obj.show();

	return 0;
}