#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp;
    char str[] = "Hello, World!\n";

    fp = fopen("output.txt", "w"); // "output.txt" 파일을 쓰기 모드로 열기
    if (fp == NULL)
    {
        printf("Error: 파일을 열 수 없습니다.\n");
        return 1;
    }

    // fwrite 함수 사용
    size_t bytes_written = fwrite(str, sizeof(char), sizeof(str), fp);
    if (bytes_written == sizeof(str))
    {
        printf("문자열을 성공적으로 썼습니다.\n");
    }
    else
    {
        printf("문자열 쓰기를 실패했습니다.\n");
    }

    fclose(fp);

    return 0;
}
