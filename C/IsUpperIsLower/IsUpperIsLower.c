#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

int main()
{
    // ���� ������: ���� �迭(���ڿ�)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isupper() �Լ�: �빮���̸� 1
    if (isupper(str[0])) // A
    {
        printf("%c�� �빮��\n", str[0]);
    }

    // islower() �Լ�: �ҹ����̸� 1
    if (islower(str[2])) // b
    {
        printf("%c�� �ҹ���\n", str[2]);
    }

    return 0;
}
