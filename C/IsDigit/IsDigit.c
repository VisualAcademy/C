#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

int main(void)
{
    // ���� ������: ���� �迭(���ڿ�)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isdigit() �Լ�: �����̸� 1(true)
    if (isdigit(str[1]))
    {
        printf("%c��(��) ����\n", str[1]);
    }
}
