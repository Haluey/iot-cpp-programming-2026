// 동적할당으로 구현할 때 이동생성자 구현
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Myclass {
	char* name;
	int age;
public:
	Myclass(const char* name = "", int age = 0) {
		cout << "일반생성자 호출!" << endl;
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
		this->age = age;
	}
	Myclass(const Myclass& other) {
		cout << "복사생성자 호출!" << endl;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	Myclass(Myclass&& other) noexcept {
		cout << "이동생성자 호출!" << endl;
		this->name = other.name;
		this->age = other.age;

		other.name = nullptr;
		other.age = 0;
	}
	~Myclass() {
		delete[] name;
	}
	void showMyclass() {
		if (name)
			cout << "이름 : " << name << ", 나이 : " << age << endl;
		else
			cout << "이름 : 없음, 나이 : " << age << endl;
	}
};

int main(void) {
	Myclass bcl;
	bcl.showMyclass();

	Myclass cl("홍길동", 33);
	cl.showMyclass();

	Myclass cpcl(cl);
	cpcl.showMyclass();

	Myclass mvcl(move(cl));
	mvcl.showMyclass();

	cl.showMyclass();

	return 0;
}