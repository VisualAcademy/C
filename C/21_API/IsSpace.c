#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

int main(void)
{
    // ���� ������: ���� �迭(���ڿ�)
    char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

    // isspace() �Լ�: ���� �����̸� 1
    if (isspace(str[5])) // 5��° �ε����� ���ڰ��� �����̳�?
    {
        printf("\"%c\"�� ����\n", str[5]);
    }

    return 0;
}
