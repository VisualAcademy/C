#include <stdio.h>

int main(void)
{
    char c = 'A';

    printf("원래의 문자: %c\n", c);

    // 문자 변수에 증가 연산자 사용
    c++;
    printf("증가 연산 후의 문자: %c\n", c);

    // 문자 변수에 감소 연산자 사용
    c--;
    printf("감소 연산 후의 문자: %c\n", c);

    return 0;
}
