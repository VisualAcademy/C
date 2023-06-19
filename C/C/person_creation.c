#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Person 구조체 정의
struct Person
{
    char name[50];
    int age;
};

// Person 구조체를 생성하여 반환하는 함수
struct Person* create_person(char* name, int age)
{
    struct Person* new_person = (struct Person*)malloc(sizeof(struct Person));

    // 메모리 할당 확인
    if (new_person == NULL)
    {
        printf("오류! 메모리를 할당하지 못했습니다.");
        exit(0);
    }

    // 메모리 초기화
    memset(new_person, 0, sizeof(struct Person));

    // 구조체 필드 설정
    strcpy(new_person->name, name);
    new_person->age = age;

    return new_person;
}

int main(void)
{
    struct Person* person = create_person("홍길동", 30);
    printf("이름: %s, 나이: %d\n", person->name, person->age);

    // 할당된 메모리 해제
    free(person);

    return 0;
}
