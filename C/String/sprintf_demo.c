#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf 함수 선언

int main(void)
{
    char buffer[80]; // 문자열 저장 공간 준비

    // 서식 지정자를 사용하여 숫자와 문자열을 묶어서 문자 배열에 저장
    sprintf(buffer, "%d. Hello, %s!", 1, "World");

    printf("%s\n", buffer); // 1. Hello, World!

    return 0;
}
