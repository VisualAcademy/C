#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int first;
    int second;

    scanf("%d %d", &first, &second);

    for (int i = first; i <= second; i++)
    {
        if (i % 3 == 0 && i % 4 == 0) // 3�� 4�� ������� ��
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
