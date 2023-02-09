#include <stdio.h>

int main(void)
{
    FILE* fp;
    int c;

    fp = fopen("sample.txt", "r"); // "sample.txt" 파일을 읽기 모드로 열기
    if (fp == NULL)
    {
        printf("Error: 파일을 열 수 없습니다.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", (char)c);
    }

    fclose(fp);

    return 0;
}
