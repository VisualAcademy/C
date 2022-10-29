#include <stdio.h>

int main(void)
{
    char buffer[80];

    printf("문장을 입력하세요: ");
    fgets(buffer, 80, stdin);

    puts("입력하신 문자열은: ");
    puts(buffer);

    return 0;
}
