#include <stdio.h>

int main(void)
{
    // 2���� �迭 ����
    int a[2][3];
    int i, j;

    // 2���� �迭 �ʱ�ȭ
    a[0][0] = 10; a[0][1] = 20;
    a[0][2] = 30; a[1][0] = 40;
    a[1][1] = 50; a[1][2] = 60;

    // 2���� �迭 ����
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);//6���ݺ�
        }
        printf("\n");
    }

    return 0;
}
