#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int num1, num2;

    printf("���� �� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    printf("�ִ�: %d\n", find_max(num1, num2));

    return 0;
}
