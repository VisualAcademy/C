/*
	포인터를 함수에서 사용하기
*/
#include <stdio.h>

void set_to_fifty(int* number)
{
    *number = 50;
}

void set_to_hundred(int* number)
{
    *number = 100;
}

int main(void)
{
    int x = 5;

    printf("함수를 호출하기 전 x 값 : %d\n", x);

    set_to_fifty(&x);
    printf("set_to_fifty() 함수를 호출한 후의 x값 : %d \n", x);

    set_to_hundred(&x);
    printf("set_to_hundred() 함수를 호출한 후의 x값 : %d \n", x);

    return 0;
}
