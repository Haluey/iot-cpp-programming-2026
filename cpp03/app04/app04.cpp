// C에서 동적할당
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main(void) {
	int size;
	int* arr;

	printf("배열크기를 입력하시오 : ");	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

	printf("%d개 숫자를 입력하시오\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d번째 숫자 : ", i + 1); scanf("%d", arr + i);
	}

	printf("총 입력 : ");
	for (int i = 0; i < size; i++) {
		if (arr != nullptr) {		// 역참조 경고 처리
			printf("%d ", *(arr + i));
		}
	}
	printf("\n");

	return 0;
}