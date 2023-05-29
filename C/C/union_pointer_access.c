#define _CRT_SECURE_NO_WARNINGS     // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ����

// ����ü ����
union Container
{
    short itemCount;
    float weight;
    int volume;
};

int main(void)
{
    union Container* c1 = malloc(sizeof(union Container)); // ����ü ������ ����, �޸� �Ҵ�

    printf("����ü�� ��ü ũ��: %d����Ʈ\n", sizeof(union Container)); // 8: ����ü�� ��ü ũ��� ���� ū �ڷ����� ũ��

    c1->itemCount = 10;
    printf("itemCount�� ��: %d\n", c1->itemCount); // itemCount�� ��: 10

    c1->weight = 3.14f;
    printf("weight�� ��: %.2f\n", c1->weight); // weight�� ��: 3.14

    c1->volume = 100;
    printf("volume�� ��: %d\n", c1->volume); // volume�� ��: 100

    free(c1); // ���� �޸� ����

    return 0;
}
