#include <stdio.h>

int main()
{
    printf("%d\n", 1234);           // 1234: 정수 리터럴
    printf("%d\n", 99);             // 99: 10진 정수 리터럴 
    printf("0%o\n", 012);           // 012: 8진 정수 리터럴 
    printf("0x%X\n", 0x1A);         // 0x1A: 16진 정수 리터럴 
    printf("%f\n", 0.12f);          // 0.120000: 실수 리터럴 
    printf("%f\n", 0.34f);          // 0.340000: 실수 리터럴 소수점 표기 
    printf("%f\n", 0.56F);          // 0.560000: 실수 리터럴 소수점 표기 
    printf("%f\n", 1.0e-3f);        // 0.001000: 실수 리터럴 지수 표기법 
    printf("%f\n", 1.0E-3F);        // 0.001000: 실수 리터럴 지수 표기법 
    printf("%c\n", 'C');            // C: 문자 리터럴 
    printf("%s\n", "C language");   // C language: 문자열 리터럴 
    printf("%p\n", NULL);           // 00000000: NULL 리터럴

    return 0;
}
