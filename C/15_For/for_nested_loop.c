#include <stdio.h>

int main(void)
{
    // (3 * 3)�� �ݺ�
    for (int i = 0; i < 3; i++) // ����(height) �ݺ�
    {
        printf("i: %d\n", i); // i �� ���
        for (int j = 0; j < 3; j++) // �ʺ�(width) �ݺ�
        {
            printf("\tj: %d\t", j); // i ���� �ش��ϴ� j �� ��� 
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
