#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h>

// �� �Լ��� ���޵� ������ ������ ����ϰ� ��ȯ�մϴ�.
int calculate_square(int num)
{
    return num * num;
}

int main(void)
{
    int num;

    // ����ڿ��� ������ ���� ���ڸ� �Է��ϵ��� ��û�մϴ�.
    printf("������ ���� ���ڸ� �Է��ϼ���: ");
    scanf("%d", &num);

    // ����ڰ� �Է��� ������ ������ ����ϰ� ����մϴ�.
    printf("%d�� ����: %d\n", num, calculate_square(num));

    return 0;
}
