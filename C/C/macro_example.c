#include <stdio.h>

#define PI 3.14159
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
    int a = 10, b = 20;
    float r = 5.0;
    printf("�������� ��: %f\n", PI);
    printf("%d�� %d �� ���� ��: %d\n", a, b, MIN(a, b));
    printf("������ %f�� ���� ����: %f\n", r, PI * r * r);
    return 0;
}
