#include <stdio.h>

int main(void)
{
    // for ��ø ������ (5 * 5)�� �ݺ��Ͽ� ���ﰢ�� ��� ���
    for (int i = 0; i < 5; i++) // ����(height) �ݺ�
    {
        for (int j = 0; j < 5; j++) // �ʺ�(width) �ݺ�
        {
            if (i > j) // i�� j���� ũ��(�ּ�, i���� j�� 1 ���� ��) ���� ��� 
            {
                printf(" "); // ���� ���
            }
            else
            {
                printf("*"); // ��ǥ ���
            }
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
