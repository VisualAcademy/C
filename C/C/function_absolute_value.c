#include <stdio.h>

// ������ ������ ��ȯ�ϴ� �Լ�
int calculate_absolute_value(int num)
{
    // �Է¹��� ������ 0 �Ǵ� ����̸� �״�� ��ȯ, �����̸� ����� ��ȯ�Ͽ� ��ȯ
    return (num < 0) ? -num : num;
}

int main(void)
{
    // �׽�Ʈ�� ���� ���� ��
    int num = -21;

    // calculate_absolute_value �Լ��� ����Ͽ� ���� ���ϱ�
    int abs_value = calculate_absolute_value(num);

    // ��� ���
    printf("%d�� ����: %d\n", num, abs_value);

    return 0;
}
