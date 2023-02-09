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

/* 구조체 배열 반환 */
struct Student* get_students(int num_students)
{
    struct Student* students;
    int i;

    /* 동적 할당 */
    students = (struct Student*)malloc(num_students * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    /* 구조체에 정보 입력 */
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

    /* 함수 호출 */
    students = get_students(num_students);

    /* 구조체 정보 출력 */
    for (i = 0; i < num_students; ++i)
        printf("Name: %s  Age: %d  Grade: %d\n", (students + i)->name, (students + i)->age, (students + i)->grade);

    return 0;
}
