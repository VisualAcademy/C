#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

int main()
{
    // ���� ������: ���� �迭(���ڿ�)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isalnum() �Լ�: ���ĺ� �Ǵ� �����̸� true
    if (isalnum(str[2]) && isalnum(str[3])) // b && 2
    {
        printf("%c�� %c�� ���ĺ� �Ǵ� ����\n", str[2], str[3]);
    }

    return 0;
}
