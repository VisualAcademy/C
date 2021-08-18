#include <stdio.h>

int main()
{
    int age = 21;
    const float PI = 3.14F;

    int* p1 = &age;
    float* p2 = &PI;

    printf("���� age ��: %d\n", age);
    printf("���� age �ּ�: %p\n", &age);

    printf("������ ���� p1�� ��: %p\n", p1);
    printf("������ ���� p1�� ���� ��(������): %d\n", *p1);
    printf("������ ���� p1�� �ּ�: %p\n", &p1);

    printf("\n");

    printf("��� PI ��: %.2f\n", PI);
    printf("��� PI �ּ�: %p\n", &PI);

    printf("������ ���� p2�� ��: %p\n", p2);
    printf("������ ���� p2�� ���� ��(������): %.2f\n", *p2);
    printf("������ ���� p2�� �ּ�: %p\n", &p2);

    return 0;
}
