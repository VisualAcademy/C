#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ���ڿ� ������ ����
    char numberString1[] = "123";
    char numberString2[] = "-456";

    // atoi �Լ��� ����Ͽ� ���ڿ��� ������ ��ȯ
    int number1 = atoi(numberString1);
    int number2 = atoi(numberString2);

    // ��ȯ�� ���� ���
    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);

    // �� ������ �� ���
    printf("Sum = %d\n", number1 + number2);

    return 0;
}
