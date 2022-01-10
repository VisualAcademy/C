// getchar_function.c
#include <stdio.h>

int main(void)
{
    int c;

    printf("문자 하나 입력: _\b");
    c = getchar();

    printf("입력한 문자: %c\n", c);

    return 0;
}
