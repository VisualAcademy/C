#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, originalNum, reversedNum = 0, digit;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);
    originalNum = num;

    // �Էµ� ������ �������� ������ ����
    while (num != 0)
    {
        digit = num % 10;  // ������ �ڸ��� ����
        reversedNum = reversedNum * 10 + digit; // ������ ���� ������ �ڸ��� �߰�
        num /= 10; // ������ �ڸ��� ����
    }

    // ������ ���ڿ� ������ ���ڸ� ���Ͽ� ȸ������ �Ǵ�
    if (originalNum == reversedNum)
    {
        printf("%d�� ȸ���Դϴ�.\n", originalNum);
    }
    else
    {
        printf("%d�� ȸ���� �ƴմϴ�.\n", originalNum);
    }

    return 0;
}
