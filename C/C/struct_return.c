#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 정보를 저장할 구조체 정의
struct Student
{
    char name[50];
    int age;
    int grade;
};

// 학생 수에 따라 Student 구조체를 동적으로 생성하고 반환하는 함수
struct Student* get_students(int num_students)
{
    struct Student* students = (struct Student*)malloc(num_students * sizeof(struct Student));

    // 메모리 할당 확인
    if (students == NULL)
    {
        printf("오류! 메모리를 할당하지 못했습니다.");
        exit(0);
    }

    // 학생 정보 입력
    for (int i = 0; i < num_students; i++)
    {
        printf("학생 %d의 이름, 나이, 학년을 입력하세요: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].age, &students[i].grade);
    }

    return students;
}

int main(void)
{
    int num_students;
    printf("학생 수를 입력하세요: ");
    scanf("%d", &num_students);

    // 학생 정보를 동적으로 생성하고 출력
    struct Student* students = get_students(num_students);

    for (int i = 0; i < num_students; i++)
    {
        printf("이름: %s, 나이: %d, 학년: %d\n", students[i].name, students[i].age, students[i].grade);
    }

    // 동적으로 할당한 메모리 해제
    free(students);

    return 0;
}
