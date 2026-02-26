#include <stdio.h>

// 배열이름도 주소
// 문자열도 주소
// 함수이름도 주소

int a;
int global_c = 100;

int func() {
	return 1;
}

int main(void) {
	// b와 c는 다른 메모리영역에 있는 걸 알 수 있음
	int b;
	static int c;
	const int d = 10;		// 지역변수가 있는 메모리영역인 스택영역에 상수가 만들어짐
	char arr[20] = "hi";	// 스택영역에서 만들어짐
	char* parr = "hong";	// static과 문자열은 동일한 메모리영역

	printf("func : %p\n", func);	// 함수이름도 주소
	printf("global a : %p\n", &a);
	printf("local b : %p\n", &b);
	printf("global_c : %p\n", &global_c);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", arr);
	printf("parr : %p\n", parr);
	
	return 0;
}

/*
* 메모리 구조
* data segment : stack, heap, data
* code segment : < 함수들이 저장
*/