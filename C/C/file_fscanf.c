#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int num1, num2;
    float num3;
    char str[100];
    FILE* fp;

    // 파일을 연다.
    fp = fopen("data.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file\n");
        return 1;
    }

    // 파일에서 형식화된 문자열을 읽는다.
    fscanf(fp, "%d%f%d%s", &num1, &num3, &num2, str);

    // 파일에서 읽은 데이터를 화면에 출력한다.
    printf("%d, %f, %d, %s\n", num1, num3, num2, str);

    // 파일을 닫는다.
    fclose(fp);

    return 0;
}
