#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push, 1) // ����ü ������ �е��� ���ֱ� ���� ���� ����
struct Person
{
    char name[20];
    int age;
    float height;
};
#pragma pack(pop) // ����ü ������ �е� ���� ����

int main(void)
{
    // "person.bin" ������ ���̳ʸ� �б� ���� ����
    FILE* fp = fopen("person.bin", "rb");

    // ���� ���⿡ ������ ��� ���� �޽��� ���
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    // Person ����ü�� �ν��Ͻ� ����
    struct Person p1;

    // ���Ϸκ��� ����ü ������ �о����
    fread(&p1, sizeof(struct Person), 1, fp);

    // �о�� ����ü ������ ���
    printf("�̸�: %s, ����: %d, Ű: %.2f\n", p1.name, p1.age, p1.height);

    // ���� �ݱ�
    fclose(fp);

    // ���� ����
    return 0;
}
