/*
    ����: 1���� 100���� ¦���� ���� ���ϴ� ���α׷�
*/
#include <stdio.h>

int main(void)
{
    int sumOfEvens = 0; // ¦���� ���� ������ ����
    int counter = 0;    // �ݺ����� ī���ͷ� ����� ����

    // 1���� 100���� �ݺ�
    counter = 1;          // �ʱ�ȭ
    while (counter <= 100) // ���� �˻�
    {
        if (counter % 2 == 0) // ¦�� �Ǻ�
        {
            sumOfEvens += counter; // ¦���̸� �հ迡 ����
        }
        counter++; // ���� ���ڷ� ����
    }

    // ��� ���
    printf("1���� 100���� ¦���� ��: %d\n", sumOfEvens);

    return 0;
}
