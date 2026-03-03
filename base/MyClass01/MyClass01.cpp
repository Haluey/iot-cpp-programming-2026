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
	void setData(int aid,const char* aname,int aage) {
		id = aid;
		strcpy(name, aname);
		age = aage;
	}
	void getData() {
		cout << "학번 : " << id << ", 이름 : " << name << ", 나이 : " << age << endl;
	}
};

int main(void) {
	MyClass obj;	// 디폴트 생성자 호출.MyClass obj() : 함수 호출
	//MyClass obj(001, "hong", 22);
	obj.setData(001, "hong", 22);

	obj.getData();

	return 0;
}