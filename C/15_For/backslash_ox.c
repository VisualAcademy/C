#include <stdio.h>

int main(void)
{
    // for ��ø ������ (5 * 5)�� �ݺ��Ͽ� �齽����(\) ��� ���
    for (int i = 0; i < 5; i++) // ����(height) �ݺ�
    {
        for (int j = 0; j < 5; j++) // �ʺ�(width) �ݺ�
        {
            if (i == j) // i�� j�� ���� ��ġ�� ��ǥ ��� 
            {
                printf("O"); // ������ O ���
            }
            else
            {
                printf("X"); // ������ X ���
            }
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
