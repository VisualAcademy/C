#include <stdio.h>

int main()
{
    typedef int number; // int 형식을 number 이름의 별칭으로 사용

    number age = 123;

    printf("%d\n", age);

    return 0;
}
