#define _CRT_SECURE_NO_WARNINGS // ���� ��� �����ϱ� ���� ����
#include <stdio.h>

// ������ ȭ���� ��ȯ�ϴ� �Լ� ����
float celsius_to_fahrenheit(float celsius);

int main(void)
{
    float celsius, fahrenheit; // ���� �µ��� ȭ�� �µ��� ������ ���� ����
    printf("���� �µ��� �Է��ϼ���: ");
    scanf("%f", &celsius); // ����ڷκ��� ���� �µ��� �Է¹���

    // ���� �µ��� ȭ�� �µ��� ��ȯ
    fahrenheit = celsius_to_fahrenheit(celsius);

    // ȭ�� �µ��� �Ҽ��� ��° �ڸ����� ���
    printf("ȭ�� �µ�: %.2f\n", fahrenheit);

    return 0;
}

// ������ ȭ���� ��ȯ�ϴ� �Լ� ����
float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
