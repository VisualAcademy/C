#include <stdio.h>

int main()
{
    char code[5];

    code[0] = 'C'; // 문자 하나씩 입력
    code[1] = 'o';
    code[2] = 'd';
    code[3] = 'e';
    code[4] = '\0'; // 문자열의 끝을 나타내는 NULL 종결 문자

    printf("%s\n", code);

    return 0;
}
