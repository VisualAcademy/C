#include <stdio.h>
#include <string.h>

void reverse_string(char* str, int start, int end)
{
    // 문자열의 첫 번째와 마지막 위치를 교환
    if (start >= end)
    {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // 재귀 호출을 통해 문자열을 뒤집음
    reverse_string(str, start + 1, end - 1);
}

int main(void)
{
    char str[] = "Hello, world!";
    int len = strlen(str);

    printf("원래 문자열: %s\n", str);
    reverse_string(str, 0, len - 1);
    printf("뒤집은 문자열: %s\n", str);

    return 0;
}
