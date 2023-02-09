#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*p_func)(int, int);  // �Լ� ������ Ÿ�� ����
    p_func = &add;  // add �Լ��� �ּ� �Ҵ�
    int result = (*p_func)(3, 4);  // �Լ� �����͸� �̿��� ȣ��
    printf("Result: %d\n", result);  // Result: 7

    return 0;
}
