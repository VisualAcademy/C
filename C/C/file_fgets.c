#include <stdio.h>

int main(void)
{
    FILE* fp;
    char str[100];

    fp = fopen("input.txt", "r"); // "input.txt" 파일을 읽기 모드로 열기
    if (fp == NULL)
    {
        printf("Error: 파일을 열 수 없습니다.\n");
        return 1;
    }

    // fgets 함수 사용
    while (fgets(str, 100, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
