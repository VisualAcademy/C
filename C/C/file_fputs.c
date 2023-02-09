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

    // fputs 함수 사용
    fputs(str, fp);

    fclose(fp);

    return 0;
}
