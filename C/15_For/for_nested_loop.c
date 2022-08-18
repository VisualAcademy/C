#include <stdio.h>

int main(void)
{
    // (3 * 3)번 반복
    for (int i = 0; i < 3; i++) // 높이(height) 반복
    {
        printf("i: %d\n", i); // i 값 출력
        for (int j = 0; j < 3; j++) // 너비(width) 반복
        {
            printf("\tj: %d\t", j); // i 값에 해당하는 j 값 출력 
        }
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
