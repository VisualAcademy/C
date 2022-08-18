#include <stdio.h>

int main(void)
{
    // for 중첩 루프로 (5 * 5)번 반복하여 백슬래시(\) 모양 출력
    for (int i = 0; i < 5; i++) // 높이(height) 반복
    {
        for (int j = 0; j < 5; j++) // 너비(width) 반복
        {
            if (i == j) // i와 j가 같은 위치면 별표 출력 
            {
                printf("*"); // 별표 출력
            }
            else
            {
                printf(" "); // 공백 출력
            }
        }
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
