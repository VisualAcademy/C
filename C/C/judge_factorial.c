#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���丮�� ���ϴ� �Լ�
int factorial(int num)
{
    if (num == 0)
    {
        return 1; // 0�� ���丮���� 1
    }
    else
    {
        return num * factorial(num - 1); // �� ���� ��� num * (num - 1)�� ���丮��
    }
}

int main(void)
{
    int num;
    printf("���丮���� ���� ���ڸ� �Է��ϼ���(2~20): ");
    scanf("%d", &num);

    // ���丮�� ���ϴ� �Լ� ȣ��
    int result = factorial(num);
    printf("%d! = %d\n", num, result);

    return 0;
}
