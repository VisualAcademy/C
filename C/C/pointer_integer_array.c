// 포인터를 사용하여 5의 배수만 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    int a[] = { 22, 33, 44, 55, 54, 43, 32, 21 };  // int형 배열 a를 선언하고 초기화
    int* p = a;  // a 배열의 시작 주소를 가리키는 포인터 p를 선언

    for (int i = 0; i < 8; i++)  // 배열 a의 각 요소를 확인
    {
        if (*(p + i) % 5 == 0)  // 만약 a[i]가 5의 배수이면
        {
            printf("%d\n", *(p + i));  // a[i]의 값을 출력
        }
    }

    return 0;
}
