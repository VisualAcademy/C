#include <stdio.h>

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i;

    // �迭 �̸��� �����ͷ� ����
    int* ptr = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    // �迭 ÷�ڸ� ����� ���
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
