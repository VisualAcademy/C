// https://github.com/VisualAcademy/Docs/blob/main/docs/c-language/pointer-start-c.md
// �����ͽ���.c
// pointer-start-c.c 
#include <stdio.h>

int main(void)
{
    int a, b, c; // ���� ����
    int* p; // ������(����;�ּ�)�� ����

    a = 100;
    b = 200;

    p = &c;

    c = a + b;

    printf(" a: %d\n", a);
    printf(" b: %d\n", b);
    printf(" c: %d\n", c);
    printf(" p: %p\n", p); // ����
    printf("*p: %d\n", *p); // �����ϰ� �ִ� ������ �� == ������ 

    return 0;
}
