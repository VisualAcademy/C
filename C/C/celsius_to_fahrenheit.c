#define _CRT_SECURE_NO_WARNINGS // ���� ��� �����ϱ� ���� ����
#include <stdio.h> 

int main(void)
{
    float celsius, fahrenheit; // ���� �µ��� ȭ�� �µ��� ������ ���� ����
    printf("���� �µ��� �Է��ϼ���: ");
    scanf("%f", &celsius); // ����ڷκ��� ���� �µ��� �Է¹���

    // ���� �µ��� ȭ�� �µ��� ��ȯ
    fahrenheit = (celsius * 9 / 5) + 32;

    // ȭ�� �µ��� �Ҽ��� ��° �ڸ����� ���
    printf("ȭ�� �µ�: %.2f\n", fahrenheit);

    return 0;
}
