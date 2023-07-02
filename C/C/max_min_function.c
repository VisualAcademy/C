#include <stdio.h>

// 두 정수 중에서 큰 값을 반환하는 함수
int get_max(int x, int y)
{
    // 삼항 연산자를 사용하여 두 수 중 큰 값을 반환
    return (x > y) ? x : y;
}

// 두 정수 중에서 작은 값을 반환하는 함수
int get_min(int x, int y)
{
    // if else 문을 사용하여 두 수 중 작은 값을 반환
    if (x < y)
    {
        return x; // x가 더 작은 경우
    }
    else
    {
        return y; // y가 더 작거나 두 수가 같은 경우
    }
}

int main(void)
{
    // get_max 함수를 사용하여 큰 값을 출력
    printf("%d\n", get_max(3, 5)); // 5

    // get_min 함수를 사용하여 작은 값을 출력
    printf("%d\n", get_min(-3, -5)); // -5

    return 0;
}