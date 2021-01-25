#include <stdio.h>
#include <string.h>

void main()
{
    char* a = "안녕";
    char* b = "안녕";

    // 문자열 외 비교
    if (a == b)
    {
        printf("같습니다.\n");
    }

    // 정통 C언어 문법으로 문자열 비교
    if (strcmp(a, b) == 0)
    {
        printf("같습니다.\n");
    }
}
