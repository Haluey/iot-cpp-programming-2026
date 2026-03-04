// 이름공간(namespace)
// 존재하는 이름공간이 다를경우
// 동일한 이름의 함수 및 변수를 선언하는 것이 가능
// 팀프로젝트 진행 중 발생할 수 있는 이름의 충돌을 막기위해서 필요

#include <iostream>

namespace BestComImpl {
	void SimpleFunc(void);	// 이름공간에 함수 선언
}

namespace ProgComImpl {
	void SimpleFunc(void);	// 이름공간에 함수 선언
}

int main(void) {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();

	return 0;
}

// 이름공간에 함수 정의
void BestComImpl::SimpleFunc(void) {
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

// 이름공간에 함수 정의
void ProgComImpl::SimpleFunc(void) {
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}