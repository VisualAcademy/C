// �����͹迭_�������迭����.c
/*
    �����ͺ����� 2�����迭�� �����ؼ� ȣ��
*/
#include <stdio.h>

int main(void)
{
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int* p;
    int i;

    p = arr;

    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d \n", *(p + i));
    }
}
