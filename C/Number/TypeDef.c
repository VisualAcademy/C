#include <stdio.h>

int main(void)
{
    typedef int number; // int 형식을 number 이름의 별칭으로 사용

    number age = 123; // int age = 123; 코드와 동일

    printf("%d\n", age);

    return 0;
}
