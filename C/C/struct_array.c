#define _CRT_SECURE_NO_WARNINGS // ���� ��� ��Ȱ��ȭ�ϴ� ��ó���� ������
#include <stdio.h> 
#include <string.h> // ���ڿ� ó�� �Լ��� ����ϱ� ���� ���̺귯��

// Person�̶�� �̸��� ����ü�� ����
typedef struct
{
    char name[100]; // �̸��� ������ ���� �迭
    int age; // ���̸� ������ ������ ����
} Person;

int main(void)
{
    Person people[3]; // Person ����ü Ÿ���� �迭 ����
    strcpy(people[0].name, "ȫ�浿"); // ù ��° ����ü�� name �ʵ忡 "ȫ�浿" �Ҵ�
    people[0].age = 30; // ù ��° ����ü�� age �ʵ忡 30 �Ҵ�
    strcpy(people[1].name, "��λ�"); // �� ��° ����ü�� name �ʵ忡 "��λ�" �Ҵ�
    people[1].age = 25; // �� ��° ����ü�� age �ʵ忡 25 �Ҵ�
    strcpy(people[2].name, "�Ӳ���"); // �� ��° ����ü�� name �ʵ忡 "�Ӳ���" �Ҵ�
    people[2].age = 40; // �� ��° ����ü�� age �ʵ忡 40 �Ҵ�
    for (int i = 0; i < 3; i++) // ����ü �迭�� ��� ��Ҹ� ��ȸ
    {
        printf("�̸�: %s\n", people[i].name); // ���� ����ü�� name �ʵ� ���
        printf("����: %d\n", people[i].age); // ���� ����ü�� age �ʵ� ���
    }
    return 0;
}
