#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "Hello, World!";

    // 문자열의 길이 구하기
    int length = strlen(str);
    printf("문자열의 길이: %d\n", length);

    // 문자열의 크기 구하기
    int size = sizeof(str);
    printf("문자열의 크기: %d\n", size);

    return 0;
}
