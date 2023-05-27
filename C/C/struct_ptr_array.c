#define _CRT_SECURE_NO_WARNINGS // 보안 경고를 비활성화하는 전처리기 지시자
#include <stdio.h>
#include <stdlib.h> // 메모리 관련 함수를 사용하기 위한 라이브러리
#include <string.h> // 문자열 처리 함수를 사용하기 위한 라이브러리

// Person이라는 이름의 구조체를 정의
typedef struct
{
    char name[100]; // 이름을 저장할 문자 배열
    int age; // 나이를 저장할 정수형 변수
} Person;

int main(void)
{
    Person* people[3]; // Person 구조체 포인터 타입의 배열 선언
    for (int i = 0; i < 3; i++)
    {
        people[i] = (Person*)malloc(sizeof(Person)); // 각 구조체 포인터에 메모리 동적 할당
    }
    strcpy(people[0]->name, "홍길동"); // 첫 번째 구조체의 name 필드에 "홍길동" 할당
    people[0]->age = 35; // 첫 번째 구조체의 age 필드에 35 할당
    strcpy(people[1]->name, "백두산"); // 두 번째 구조체의 name 필드에 "백두산" 할당
    people[1]->age = 60; // 두 번째 구조체의 age 필드에 60 할당
    strcpy(people[2]->name, "임꺽정"); // 세 번째 구조체의 name 필드에 "임꺽정" 할당
    people[2]->age = 50; // 세 번째 구조체의 age 필드에 50 할당
    for (int i = 0; i < 3; i++)
    {
        printf("이름: %s\n", people[i]->name); // 현재 구조체의 name 필드 출력
        printf("나이: %d\n", people[i]->age); // 현재 구조체의 age 필드 출력
        free(people[i]); // 동적 할당한 메모리 해제
    }
    return 0;
}
