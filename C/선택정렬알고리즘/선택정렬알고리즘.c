/*
    ���� ���� �˰���: Selection Sort
    [1]ASCending: �������� : 1, 2, 3 ��, A, B, C ��
    [2]DESCending: �������� : 321 ��, �ٳ��� ��
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
    //[2] Process : �˰���(���� �ذ� �ɷ�) : for+if
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
