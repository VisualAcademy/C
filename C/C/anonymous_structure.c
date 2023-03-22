#define _CRT_SECURE_NO_WARNINGS // Visual Studio의 보안 경고를 무시
#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위해 string.h 헤더 파일 포함

// Person 구조체 정의
typedef struct
{
    char name[100]; // 이름을 저장할 문자 배열
    int age;        // 나이를 저장할 정수형 변수
} Person;

int main(void)
{
    Person person; // Person 구조체 변수 person 선언

    // person의 이름 필드에 "John Doe"를 복사
    strcpy(person.name, "John Doe");
    person.age = 30; // person의 나이 필드에 30 할당

    // person의 이름과 나이 출력
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0; 
}
