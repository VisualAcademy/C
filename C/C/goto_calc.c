//[?] �� �� a, b�� �Է¹޾�, 
// a > b�� a - b�� ���
// a < b�� a + b�� ���
// a == b�� ���α׷� ����
// ��, goto �� ���
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int result = 0;
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        goto subtraction;
    }
    else if (a < b)
    {
        goto addition;
    }
    else // a == b
    {
        goto exit;
    }

addition:
    result = a + b; // ����
    goto print;

subtraction:
    result = a - b; // ����
    goto print;

print:
    printf("%d\n", result); // ���

exit:
    printf("exit\n"); // ����

    return 0;
}
