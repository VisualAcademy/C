#include <stdio.h>

// �ּ� ������ ��Ÿ���� ����ü
struct Address
{
    char street[50]; // �Ÿ���
    char city[50];   // ���ø�
    char zipCode[10];// �����ȣ
};

// �л� ������ ��Ÿ���� ����ü
struct Student
{
    char name[50];              // �л� �̸�
    struct Address address;    // �ּ� ���� (Address ����ü�� ���)
};

int main(void)
{
    // �л� ����ü ������ �ʱ�ȭ. �ּ� ������ �Բ� �ʱ�ȭ�Ѵ�.
    struct Student student1 = { "ö��", {"123����", "����", "12345"} };

    // �л� ������ ���
    printf("�̸�: %s\n", student1.name);
    printf("�ּ�: %s, %s, %s\n", student1.address.street, student1.address.city, student1.address.zipCode);

    return 0;
}
