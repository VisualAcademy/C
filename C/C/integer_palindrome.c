#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, originalNum, reversedNum = 0, digit;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    originalNum = num;

    // 입력된 정수를 역순으로 뒤집는 과정
    while (num != 0)
    {
        digit = num % 10;  // 마지막 자릿수 추출
        reversedNum = reversedNum * 10 + digit; // 뒤집힌 수에 마지막 자릿수 추가
        num /= 10; // 마지막 자릿수 제거
    }

    // 원래의 숫자와 뒤집힌 숫자를 비교하여 회문인지 판단
    if (originalNum == reversedNum)
    {
        printf("%d는 회문입니다.\n", originalNum);
    }
    else
    {
        printf("%d는 회문이 아닙니다.\n", originalNum);
    }

    return 0;
}
