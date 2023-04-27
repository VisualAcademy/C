/*
    선택 정렬 알고리즘: Selection Sort
    [1]ASCending: 오름차순 : 1, 2, 3 순, A, B, C 순
    [2]DESCending: 내림차순 : 321 순, 다나가 순
*/
#include <stdio.h>
#define N 5

int main(void)
{
    //[0] Init
    int i, j, temp;
    //[1] Input
    int data[N] = { 3, 2, 1, 5, 4 };
    temp = 0;
    //[2] Process : 알고리즘(문제 해결 능력) : for+if
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    //[3] Output
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");

    return 0;
}
