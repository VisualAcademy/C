/*
    4.1.1. 예제. if문 사용 예제 : 조건문1.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int intNum = 0;
    printf("정수입력:_\b");
    scanf("%d", &intNum);
    printf("\n입력한수:%d", intNum);

    //[1] if문. : 절대값.
    if (intNum < 0) {	//조건식
        intNum = -intNum;
    }
    printf("\n절대값:%d", intNum);

    //[2] else문. : 짝수, 홀수 구문
    if (intNum % 2 == 0) {	//조건식
        printf("\n짝수");	//참일때
        printf("\n");		//복문
    }
    else {	//단문(중괄호 생략가능)
        printf("\n홀수");	//거짓일때
    }

    //[3] else if문. : 여러개 조건 처리
    if (intNum % 7 == 0) {
        printf("7의 배수");
    }
    else if (intNum % 5 == 0) {
        printf("5의 배수");
    }
    else if (intNum % 3 == 0) {
        printf("3의 배수");
    }
    else {
        printf("3,5,7의 배수가 아님.");
    }

    return 0;
}
