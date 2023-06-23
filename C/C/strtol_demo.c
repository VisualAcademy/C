#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    const char* numberString1 = "123";
    const char* numberString2 = "0xff";
    char* endPtr;
    long number1, number2;

    // 10���� ��ȯ
    errno = 0;  // errno �ʱ�ȭ
    number1 = strtol(numberString1, &endPtr, 10);  // numberString1�� 10������ ��ȯ
    if (errno == 0)
    {
        printf("number1 = %ld\n", number1);
    }
    else
    {
        printf("number1 ��ȯ �� ���� �߻�\n");  // ���� �޽��� ���
    }

    // 16���� ��ȯ
    errno = 0;  // errno �ʱ�ȭ
    number2 = strtol(numberString2, &endPtr, 16);  // numberString2�� 16������ ��ȯ
    if (errno == 0)
    {
        printf("number2 = %ld\n", number2);
    }
    else
    {
        printf("number2 ��ȯ �� ���� �߻�\n");  // ���� �޽��� ���
    }

    return 0;
}
