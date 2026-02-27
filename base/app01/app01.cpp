// C++에서 printf를 대신하는 데이터 출력

#include <iostream>

int main(void) {
	int num = 20;

	//printf("num : %d\n", num);와 동일한 작동을 하는 코드
	std::cout << "Hello world" << std::endl;
	std::cout << "Hello " << "world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}