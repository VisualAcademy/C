#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �е��� ���ֱ� ���� #pragma pack ������ ���
#pragma pack(push, 1)
struct Person
{
    char name[20];
    int age;
    float height;
};
#pragma pack(pop)

int main(void)
{
    // person.bin ������ ���� ���(wb)�� ����.
    FILE* fp = fopen("person.bin", "wb");

    // ���� ���⿡ �������� ���
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    // Person ����ü ���� ���� �� �ʱ�ȭ
    struct Person p1;
    strcpy(p1.name, "Kodee");
    p1.age = 30;
    p1.height = 5.5;

    // ����ü�� ���Ͽ� ����.
    fwrite(&p1, sizeof(struct Person), 1, fp);

    // ������ �ݴ´�.
    fclose(fp);

    // ���� �޽��� ���
    printf("����ü�� ���Ͽ� ���������� ���������ϴ�.\n");

    return 0;
}
