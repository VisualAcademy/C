#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �л� ������ ������ ����ü ����
struct Student
{
    char name[50];
    int age;
    int grade;
};

// �л� ���� ���� Student ����ü�� �������� �����ϰ� ��ȯ�ϴ� �Լ�
struct Student* get_students(int num_students)
{
    struct Student* students = (struct Student*)malloc(num_students * sizeof(struct Student));

    // �޸� �Ҵ� Ȯ��
    if (students == NULL)
    {
        printf("����! �޸𸮸� �Ҵ����� ���߽��ϴ�.");
        exit(0);
    }

    // �л� ���� �Է�
    for (int i = 0; i < num_students; i++)
    {
        printf("�л� %d�� �̸�, ����, �г��� �Է��ϼ���: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].age, &students[i].grade);
    }

    return students;
}

int main(void)
{
    int num_students;
    printf("�л� ���� �Է��ϼ���: ");
    scanf("%d", &num_students);

    // �л� ������ �������� �����ϰ� ���
    struct Student* students = get_students(num_students);

    for (int i = 0; i < num_students; i++)
    {
        printf("�̸�: %s, ����: %d, �г�: %d\n", students[i].name, students[i].age, students[i].grade);
    }

    // �������� �Ҵ��� �޸� ����
    free(students);

    return 0;
}
