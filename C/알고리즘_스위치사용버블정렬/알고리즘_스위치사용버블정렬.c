/*
	5���� ���� �Է½�Ų �� ����ġ�� ����� ���� ����(Bubble Sort)�� �̿�
	�������� �����ϴ� ���α׷�
*/
#include <stdio.h>

int main(void)
{
    // ������ ���� �迭�� �ʱ�ȭ�մϴ�.
    int intNum[] = { 33, 21, 17, 5, 40 };
    int i, j, temp;
    int intSwitch;

    // �ʱ� ������ ���
    printf("�ʱ� ������ : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", intNum[i]);
    }
    printf("\n");

    // ���� ������ ����Ͽ� �迭�� ������������ �����մϴ�.
    for (i = 0; i < 5 - 1; i++)
    {
        // ����ġ ������ 0���� �ʱ�ȭ�մϴ�.
        intSwitch = 0;

        // ���� ��ҿ� ���� ��Ҹ� ���Ͽ� �ʿ��� ��� ��ȯ�մϴ�.
        for (j = 0; j < 5 - 1 - i; j++)
        {
            if (intNum[j] > intNum[j + 1])
            {
                // ��� ��ȯ
                temp = intNum[j];
                intNum[j] = intNum[j + 1];
                intNum[j + 1] = temp;

                // ����ġ ������ 1�� �����Ͽ� ��ȯ �߻��� ��Ÿ���ϴ�.
                intSwitch = 1;
            }
        }

        // ����ġ ������ 0�̸� ��ȯ���� ���� ������ �����ϰ� ������ �����մϴ�.
        if (intSwitch == 0)
        {
            break;
        }
    }

    // ���ĵ� ������ ���
    printf("���ĵ� ������ : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", intNum[i]);
    }
    printf("\n");

    return 0;
}
