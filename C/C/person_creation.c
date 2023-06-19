#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Person ����ü ����
struct Person
{
    char name[50];
    int age;
};

// Person ����ü�� �����Ͽ� ��ȯ�ϴ� �Լ�
struct Person* create_person(char* name, int age)
{
    struct Person* new_person = (struct Person*)malloc(sizeof(struct Person));

    // �޸� �Ҵ� Ȯ��
    if (new_person == NULL)
    {
        printf("����! �޸𸮸� �Ҵ����� ���߽��ϴ�.");
        exit(0);
    }

    // �޸� �ʱ�ȭ
    memset(new_person, 0, sizeof(struct Person));

    // ����ü �ʵ� ����
    strcpy(new_person->name, name);
    new_person->age = age;

    return new_person;
}

int main(void)
{
    struct Person* person = create_person("ȫ�浿", 30);
    printf("�̸�: %s, ����: %d\n", person->name, person->age);

    // �Ҵ�� �޸� ����
    free(person);

    return 0;
}
