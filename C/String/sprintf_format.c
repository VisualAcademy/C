#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf 함수 선언

int main(void)
{
    char buffer[80]; // 문자열 저장 공간 준비

    // 서식 지정자를 사용하여 여러 종류의 데이터 타입을 묶어서 문자 배열에 저장
    sprintf(buffer, "%c, %d, %.2f, %e", 'A', 1234, 3.14, 123.45e-2f);

    printf("%s\n", buffer); // A, 1234, 3.14, 1.234500e+00

    return 0;
}
