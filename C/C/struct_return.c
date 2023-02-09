#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    int grade;
};

/* ����ü �迭 ��ȯ */
struct Student* get_students(int num_students)
{
    struct Student* students;
    int i;

    /* ���� �Ҵ� */
    students = (struct Student*)malloc(num_students * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    /* ����ü�� ���� �Է� */
    for (i = 0; i < num_students; ++i)
    {
        printf("Enter the name, age, and grade of student %d: ", i + 1);
        scanf("%s", (students + i)->name);
        scanf("%d", &(students + i)->age);
        scanf("%d", &(students + i)->grade);
    }

    return students;
}

int main(void)
{
    int num_students, i;
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    /* �Լ� ȣ�� */
    students = get_students(num_students);

    /* ����ü ���� ��� */
    for (i = 0; i < num_students; ++i)
        printf("Name: %s  Age: %d  Grade: %d\n", (students + i)->name, (students + i)->age, (students + i)->grade);

    return 0;
}
