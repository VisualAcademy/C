// 포인터를 사용하여 5의 배수만 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    int a[] = { 22, 33, 44, 55, 54, 43, 32, 21 };
    int* p = a;

    for (int i = 0; i < 8; i++)
    {
        if (*(p + i) % 5 == 0)
        {
            printf("%d\n", *(p + i));
        }
    }

    return 0;
}
