#define _CRT_SECURE_NO_WARNINGS // Visual Studio�� ���� ��� ����
#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ��� ����ϱ� ���� string.h ��� ���� ����

// Person ����ü ����
typedef struct
{
    char name[100]; // �̸��� ������ ���� �迭
    int age;        // ���̸� ������ ������ ����
} Person;

int main(void)
{
    Person person; // Person ����ü ���� person ����

    // person�� �̸� �ʵ忡 "John Doe"�� ����
    strcpy(person.name, "John Doe");
    person.age = 30; // person�� ���� �ʵ忡 30 �Ҵ�

    // person�� �̸��� ���� ���
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0; 
}
