#include <stdio.h>

// 재귀 함수로 거듭제곱 계산
int MyPower(int num, int cnt)
{
    // 기본 케이스: cnt가 0일 때 1 반환
    if (cnt == 0)
    {
        return 1;
    }

    // 재귀 호출: num * MyPower(num, cnt - 1) 반환
    return num * MyPower(num, cnt - 1);
}

int main(void)
{
    // MyPower 함수로 2의 2제곱 계산 결과 출력
    printf("%d\n", MyPower(2, 2));

    return 0;
}
