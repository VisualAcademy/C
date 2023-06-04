#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1024

int main(void)
{
    FILE* fp;
    char buffer[SIZE];

    // 샘플 데이터를 파일에 쓰기
    fp = fopen("largefile.txt", "w");  // 파일을 쓰기 모드로 열기
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) // largefile.txt에 대량의 데이터를 작성
    {
        fprintf(fp, "이것은 테스트 데이터 %d입니다.\n", i);
    }
    fclose(fp);  // 쓰기가 끝난 후에 파일을 닫아줍니다.

    // 파일을 읽기 모드로 다시 열기
    fp = fopen("largefile.txt", "r");
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
