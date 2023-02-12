#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 팩토리얼 구하는 함수
int factorial(int num)
{
    if (num == 0)
    {
        return 1; // 0의 팩토리얼은 1
    }
    else
    {
        return num * factorial(num - 1); // 그 외의 경우 num * (num - 1)의 팩토리얼
    }
}

int main(void)
{
    int num;
    printf("팩토리얼을 구할 숫자를 입력하세요(2~20): ");
    scanf("%d", &num);

    // 팩토리얼 구하는 함수 호출
    int result = factorial(num);
    printf("%d! = %d\n", num, result);

    return 0;
}
