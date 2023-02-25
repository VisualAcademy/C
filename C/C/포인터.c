#include <stdio.h>

int main(void)
{
    int a[5] = { 10, 20, 30, 40, 50 }; // int 형 배열 a를 선언하고, 초기값을 할당합니다.
    int* p = a; // 배열 a의 시작 주소를 포인터 변수 p에 저장합니다.

    printf("%d \n", *(p + 3)); // 포인터 p를 이용하여 a[3]의 값을 출력합니다.

    return 0;
}
