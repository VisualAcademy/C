#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[3]; // �� ���� �����͸� ������ �迭
    int sum = 0; // �հ踦 ������ ����

    for (int i = 0; i < 3; i++)
    {
        printf("�Է� #%d: ", i + 1);
        scanf("%d", &num[i]); // ����ڷκ��� ������ �Է¹���
        sum += num[i]; // �Էµ� �����͸� �����Ͽ� �հ� ���
    }

    printf("�հ�: %d\n", sum); // �հ� ���

    return 0;
}

//�Է� #1: 3
//�Է� #2: 2
//�Է� #3: 1
//�հ� : 6
