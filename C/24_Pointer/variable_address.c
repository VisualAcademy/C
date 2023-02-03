// variable_address.c, VariableAddress.c 
#include <stdio.h>

int main(void)
{
    int age = 21; // int 타입 변수 선언과 동시에 21로 초기화

    printf("%d -> %p\n", age, &age); // age 변수의 값과 age 변수의 주소 출력

    return 0;
}
