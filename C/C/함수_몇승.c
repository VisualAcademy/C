#include <stdio.h>

// �Լ�_���.c

int Calculate(int a, int b)
{
    int i;
    int j = 1;
    for (i = 1; i <= b; i++)
    {
        j = j * a;
    }

    return j;
}

int main(void)
{
    int result = Calculate(2, 10);

    printf("2�� 10�� : %d\n", result); //1024 = 2 ^ 10
    return 0;
}
