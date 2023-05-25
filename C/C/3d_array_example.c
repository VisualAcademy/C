#include <stdio.h>

int main(void)
{
    // 3차원 배열 선언과 초기화
    int arr[3][3][3] =
    {
        {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        },
        {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        },
        {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        }
    };

    // 반복문을 이용한 배열 값 출력
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    // 배열의 값을 변경
    arr[1][1][1] = 100;

    // 배열 값 변경 후 다시 출력
    printf("갑 변경 후:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
