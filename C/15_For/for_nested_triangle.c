#include <stdio.h>

int main(void)
{
    // for 중첩 루프로 (5 * 5)번 반복하여 직삼각형 모양 출력
    for (int i = 0; i < 5; i++) // 높이(height) 반복
    {
        for (int j = 0; j < 5; j++) // 너비(width) 반복
        {
            if (j <= i) // 별표 출력 조건 처리: i 값만큼 j를 반복하면 하나씩 증가됨
            {
                printf("*"); // 별표 출력
            }
        }
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
