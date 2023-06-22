#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    const char* numberString1 = "123";
    const char* numberString2 = "0xff";
    char* endPtr;
    long number1, number2;

    // 10진수 변환
    errno = 0;  // errno 초기화
    number1 = strtol(numberString1, &endPtr, 10);  // numberString1을 10진수로 변환
    if (errno == 0)
    {
        printf("number1 = %ld\n", number1);
    }
    else
    {
        printf("number1 변환 중 오류 발생\n");  // 오류 메시지 출력
    }

    // 16진수 변환
    errno = 0;  // errno 초기화
    number2 = strtol(numberString2, &endPtr, 16);  // numberString2를 16진수로 변환
    if (errno == 0)
    {
        printf("number2 = %ld\n", number2);
    }
    else
    {
        printf("number2 변환 중 오류 발생\n");  // 오류 메시지 출력
    }

    return 0;
}
