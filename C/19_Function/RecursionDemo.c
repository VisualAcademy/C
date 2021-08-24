// 재귀 함수(Recursion)
#include <stdio.h>

// 3항 연산자를 사용한 Factorial 구하기
int Fact(int n)
{
    return (n > 1) ? n * Fact(n - 1) : 1;
}

// 재귀 함수를 사용한 Factorial 함수 만들기: 단, 재귀함수는 Tree 구조 탐색에 유리
int Factorial(int n)
{
    // 종료
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // 재귀 호출
    return n * Factorial(n - 1);
}

// 단순한 Factorial은 이 방법이 좋음
int FactorialFor(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // ((((1 * 1) * 2) * 3) * 4)
    }
    return result;
}

int main()
{
    // 재귀 호출을 사용하여 Factorial을 구하기: 4! = 4 * 3 * 2 * 1 = 24
    printf("%d\n", 4 * 3 * 2 * 1); // 24
    printf("%d\n", FactorialFor(4)); // 24
    printf("%d\n", Factorial(4)); // 24
    printf("%d\n", Fact(4)); // 24

    return 0;
}
