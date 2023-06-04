#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    char str[] = "Hello, World!";
    if (fputs(str, file) != EOF)
    {
        printf("파일에 문자열을 성공적으로 썼습니다.\n");
    }
    else
    {
        printf("파일에 문자열 쓰기를 실패했습니다.\n");
        return 1;
    }

    fclose(file);
    return 0;
}
