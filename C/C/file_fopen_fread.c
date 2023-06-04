#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 200

int main(void)
{
    FILE* fp;
    char buffer[SIZE];

    // data.txt 파일에 샘플 데이터 쓰기
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "C 언어 파일 입출력 예제입니다.\n");
    fclose(fp);

    // data.txt 파일 읽기
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    while (fgets(buffer, SIZE, fp) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
