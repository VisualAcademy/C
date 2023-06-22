#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 문자열 형태의 숫자
    char numberString1[] = "123";
    char numberString2[] = "-456";

    // atoi 함수를 사용하여 문자열을 정수로 변환
    int number1 = atoi(numberString1);
    int number2 = atoi(numberString2);

    // 변환된 정수 출력
    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);

    // 두 정수의 합 출력
    printf("Sum = %d\n", number1 + number2);

    return 0;
}
