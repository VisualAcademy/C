// 실습_천단위콤마찍기.c
// thousands_separator.c
/*
    실습: 천 단위 콤마 찍기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 변수 선언부
    int len;
    int i;
    int _ = 0; // 버림(Discards) 

    char buffer[50];
    char* digits;

    // 데이터 입력부
    printf("변환시킬 숫자를 입력하세요... => ");
    _ = scanf("%s", buffer);
    buffer[49] = 0;

    len = strlen(buffer);
    digits = buffer;

    printf("변환 결과 : ");

    for (i = len; i > 0;)
    {
        printf("%c", *digits++);
        i--;
        if (i > 0 && (i % 3) == 0)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
