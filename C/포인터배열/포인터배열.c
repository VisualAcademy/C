#include <stdio.h>

void main(void)
{
	// 1차원 배열 선언
	int arr[] = { 10, 20, 30, 40, 50 };

	// 1차원 배열을 참조하는 포인터 변수 선언
	int* p;

	// 포인터 변수에 1차원 배열 참조
	p = arr; // 배열의 이름은 배열의 시작 주소를 갖는 포인터 상수

	// 1차원 배열 출력
	//[1] 인덱서를 통해서 출력
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	//[2] 포인터 참조를 통해서 출력
	printf("%d %d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));
	//[3] 배열 자체가 포인터이므로 배열명으로 출력
	printf("%d %d %d %d %d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), *(arr + 4));
}
