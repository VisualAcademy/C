#include <stdio.h>

// 열거형 Color 정의
enum Color
{
    Red,   // 0
    Green, // 1
    Blue   // 2
};

int main(void)
{
    // Red(0)부터 Blue(2)까지 반복
    for (enum Color color = Red; color <= Blue; ++color)
    {
        // 색상 인덱스 출력
        printf("색상 인덱스: %d\n", color);
    }

    return 0; // 정상 종료
}
