#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2;
    float num3;
    char str[100];
    FILE* fp;

    // 파일을 쓰기 모드("w")로 열어 샘플 데이터를 저장합니다.
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 샘플 데이터를 파일에 씁니다.
    fprintf(fp, "10 3.14 20 Hello, World!");

    // 파일을 닫습니다.
    fclose(fp);

    // 파일을 읽기 모드("r")로 열어 데이터를 읽습니다.
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에서 형식화된 문자열을 읽습니다.
    //fscanf(fp, "%d %f %d %[^\n]", &num1, &num3, &num2, str);
    fscanf(fp, "%d %f %d %s", &num1, &num3, &num2, str);

    // 파일에서 읽은 데이터를 화면에 출력합니다.
    printf("%d, %f, %d, %s\n", num1, num3, num2, str);

    // 파일을 닫습니다.
    fclose(fp);

    return 0;
}
