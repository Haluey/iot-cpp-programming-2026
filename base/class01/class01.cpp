// C 구조체

#include <iostream>

using namespace std;

typedef struct {
	char name[30];
	int age;
	char job[30];
} Human;

void show_data(Human ah) {
	printf("이름 : %s, 나이 : %d, 직업 : %s", ah.name, ah.age, ah.job);
	//cout << "이름 : " << ah.name << ",";
	//cout << "나이 : " << ah.age << ",";
	//cout << "직업 : " << ah.job << endl;
}

int main(void) {
	Human h = { "Hong", 30, "student" };

	show_data(h);

	return 0;
}