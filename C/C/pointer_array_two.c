#include <stdio.h>

int main(void)
{
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int* p;

    p = &a[0][0]; // 2���� �迭�� ���� ������ p�� ���

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(p + i)); // p�� �ּ��̹Ƿ� �������Ͽ� ���� �����´�.
    }
    printf("\n");

    return 0;
}
