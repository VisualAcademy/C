#include <stdio.h>

int main(void)
{
    float i;
    float* p; // Ư�� �ּ�(����;Address)���� ���� �� �ִ� �׸�

    i = 100.0;
    p = &i;

    printf("p�� �����ϰ� �ִ� ���� ��: %.2f\n", *p);
    printf("p�� �ּ� ��: %#x\n", &p); // 0xFFFFFF
    printf("p�� ��ü ��: %#x\n", p); // ���� i�� �ּҰ�
    printf("i�� �ּ� ��: %#x\n", &i); // ���� i�� �ּҰ�

    return 0;
}
