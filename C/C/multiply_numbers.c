#include <stdio.h>

// �� ������ �Ű� ������ �޾Ƽ� �� ���� ���� ��ȯ�ϴ� �Լ�
int multiply_numbers(int a, int b)
{
    return a * b; // �� �Ű� ������ ���� ��ȯ
}

int main(void)
{
    int result = multiply_numbers(6, 7); // multiply_numbers �Լ��� ȣ���ϰ� ��ȯ���� ������ ����
    printf("6�� 7�� ���� %d�Դϴ�.\n", result);

    return 0;
}
