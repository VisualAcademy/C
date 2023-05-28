#define _CRT_SECURE_NO_WARNINGS     // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����

// ����ü ����
union Box
{
    short candy;
    float snack;
    int num;
};

int main(void)
{
    union Box* b1 = malloc(sizeof(union Box)); // ����ü ������ ����, �޸� �Ҵ�

    printf("����ü�� ��ü ũ��: %d����Ʈ\n", sizeof(union Box)); // 8: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��

    b1->candy = 10;
    printf("candy�� ��: %d\n", b1->candy); // candy�� ��: 10

    b1->snack = 3.14f;
    printf("snack�� ��: %.2f\n", b1->snack); // snack�� ��: 3.14

    b1->num = 100;
    printf("num�� ��: %d\n", b1->num); // num�� ��: 100

    free(b1); // ���� �޸� ����

    return 0;
}
