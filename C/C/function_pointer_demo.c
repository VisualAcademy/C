#include <stdio.h>

// �Լ� ������Ÿ��
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

// �Լ� ������ ���� ����
int (*operation)(int, int);

int main(void)
{
    int x = 5, y = 3, result;

    // �Լ� �����Ϳ� add �Լ� �ּ� �Ҵ�
    operation = &add;
    result = operation(x, y);
    printf("%d + %d = %d\n", x, y, result);

    // �Լ� �����Ϳ� subtract �Լ� �ּ� �Ҵ�
    operation = &subtract;
    result = operation(x, y);
    printf("%d - %d = %d\n", x, y, result);

    // �Լ� �����Ϳ� multiply �Լ� �ּ� �Ҵ�
    operation = &multiply;
    result = operation(x, y);
    printf("%d * %d = %d\n", x, y, result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
