#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

int main(void)
{
    // ���� ������: ���� �迭(���ڿ�)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isalpha() �Լ�: ���ĺ��̸� 1(��)
    if (isalpha(str[0]))
    {
        printf("%c�� ���ĺ� ����\n", str[0]);
    }

    return 0;
}
