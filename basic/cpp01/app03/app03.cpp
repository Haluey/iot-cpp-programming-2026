// 이름과 나이 입력받아서 출력

#include <iostream>

int main(void) {
	std::string name;
	int age;

	//std::cout << "이름 입력 : ";
	//std::cin >> name;
	//std::cout << "나이 입력 : ";
	//std::cin >> age;

	std::cout << "이름과 나이 입력 : ";
	std::cin >> name >> age;

	std::cout << "이름 : " << name << ", 나이 : " << age << std::endl;

	return 0;
}