#include <stdio.h>

int main(void)
{
    // for ��ø ������ (3 * 3)�� �ݺ��Ͽ� ���簢�� ��� ���
    for (int i = 0; i < 3; i++) // ����(height) �ݺ�
    {
        for (int j = 0; j < 3; j++) // �ʺ�(width) �ݺ�
        {
            printf("*"); // ��ǥ ���
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
