// 이 선언은 경고를 방지하기 위해 사용되며, 비권장 함수들을 사용해도 컴파일러 경고가 발생하지 않도록 합니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// isPrime 함수는 주어진 숫자가 소수인지 아닌지를 판별합니다.
// 소수는 1과 자기 자신만을 약수로 갖는 자연수를 의미하며, 
// 따라서 1보다 작은 수는 소수가 아닙니다.
// 이 함수는 2부터 해당 숫자의 제곱근까지의 수로 숫자를 나누어봅니다. 
// 만약 나누어떨어지는 수가 있다면, 그 수는 소수가 아닙니다.
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// main 함수는 사용자로부터 숫자를 입력받아 그 숫자가 소수인지 아닌지를 판별합니다.
int main(void)
{
    int num;

    printf("소수인지 판별할 숫자를 입력하세요: ");
    scanf("%d", &num);

    // 입력받은 숫자가 소수인지 아닌지를 판별하여, 그 결과를 출력합니다.
    if (isPrime(num))
    {
        printf("%d는 소수입니다.\n", num);
    }
    else
    {
        printf("%d는 소수가 아닙니다.\n", num);
    }

    return 0;
}
