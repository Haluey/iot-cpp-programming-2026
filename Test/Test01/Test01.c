#include <stdio.h>

int n = 3.14;	// 전역변수 많이 사용하면 안됨 > 아무데서나 사용되기 때문 > 값이 오염될 수 있음

int main() {

	// '\0' 유무로 문자와 문자열 구분
	//char arr[4] = "hong";	// 이건 문자들
	char arr[] = "hong";	// 이건 문자열	// 스택 영역에 저장 - 지역변수 저장됨
	char* arr1 = "hong";	// 문자열도 주소란 것을 알 수 있음	// 데이터 세그먼트에 저장

	//printf("arr : %c", arr);
	printf("arr[0] : %c\n", arr[0]);
	printf("arr[1] : %c\n", arr[1]);
	printf("arr[2] : %c\n", arr[2]);
	printf("arr[3] : %c\n", arr[3]);
	printf("arr[4] : %s\n", arr[4]);

	// 같은 메모리영역에서 사용 중
	// 지역변수로 선언되어있기때문에 스택영역에 같이 할당되어있음
	printf("arr : %d\n", arr);
	printf("arr1 : %d\n", &arr1);
	printf("hong : %d\n", *arr1);	// "hong"의 시작주소	// 이건 앞의 arr, arr1과는 다르게 다른 메모리영역에 저장된 걸 알 수 있음
	printf("n : %d\n", &n);

	n = 3.15; // 전역변수 사용하지 마라는 예시

	return 0;
}