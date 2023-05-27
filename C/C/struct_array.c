#define _CRT_SECURE_NO_WARNINGS // 보안 경고를 비활성화하는 전처리기 지시자
#include <stdio.h> 
#include <string.h> // 문자열 처리 함수를 사용하기 위한 라이브러리

// Person이라는 이름의 구조체를 정의
typedef struct
{
    char name[100]; // 이름을 저장할 문자 배열
    int age; // 나이를 저장할 정수형 변수
} Person;

int main(void)
{
    Person people[3]; // Person 구조체 타입의 배열 선언
    strcpy(people[0].name, "홍길동"); // 첫 번째 구조체의 name 필드에 "홍길동" 할당
    people[0].age = 30; // 첫 번째 구조체의 age 필드에 30 할당
    strcpy(people[1].name, "백두산"); // 두 번째 구조체의 name 필드에 "백두산" 할당
    people[1].age = 25; // 두 번째 구조체의 age 필드에 25 할당
    strcpy(people[2].name, "임꺽정"); // 세 번째 구조체의 name 필드에 "임꺽정" 할당
    people[2].age = 40; // 세 번째 구조체의 age 필드에 40 할당
    for (int i = 0; i < 3; i++) // 구조체 배열의 모든 요소를 순회
    {
        printf("이름: %s\n", people[i].name); // 현재 구조체의 name 필드 출력
        printf("나이: %d\n", people[i].age); // 현재 구조체의 age 필드 출력
    }
    return 0;
}
