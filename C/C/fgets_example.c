#include <stdio.h>

int main(void)
{
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, 100, stdin);

    printf("입력된 문자열: %s\n", str);

    return 0;
}
