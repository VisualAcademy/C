/*
	7.7. 예제. 포인터를 사용 5의 배수만 출력하는 프로그램 : 포인터_정수형배열계산.c
*/
//배열에서 5의 배수인 수를 출력
#include <stdio.h>

int main(void)
{
    int a[10] = { 22, 33, 44, 55, 54, 43, 32, 21 };
    int* p = a;
    int hap = 0;
    float avr;

    for (int i = 0; i < 8; i++)
    {
        if (*(p + i) % 5 == 0)
        {
            printf("%4d", *(p + i));
        }
    }

    printf("\n");

    return 0;
}
