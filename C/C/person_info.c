#define _CRT_SECURE_NO_WARNINGS // Visual Studio�� ���� ��� ����
#include <stdio.h>

// person ����ü ����
struct person
{
    char name[20]; // �̸��� ������ ���� �迭
    int age;       // ���̸� ������ ������ ����
};

int main(void)
{
    struct person p1; // person ����ü ���� p1 ����

    // �̸� �Է� �ޱ�
    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", p1.name);

    // ���� �Է� �ޱ�
    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &p1.age);

    // �Է¹��� �̸��� ���� ����ϱ�
    printf("�̸�: %s\n", p1.name);
    printf("����: %d\n", p1.age);

    return 0;
}
