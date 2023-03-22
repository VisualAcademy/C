#define _CRT_SECURE_NO_WARNINGS // Visual Studio의 보안 경고를 무시
#include <stdio.h>

// person 구조체 정의
struct person
{
    char name[20]; // 이름을 저장할 문자 배열
    int age;       // 나이를 저장할 정수형 변수
};

int main(void)
{
    struct person p1; // person 구조체 변수 p1 선언

    // 이름 입력 받기
    printf("이름을 입력하세요: ");
    scanf("%s", p1.name);

    // 나이 입력 받기
    printf("나이를 입력하세요: ");
    scanf("%d", &p1.age);

    // 입력받은 이름과 나이 출력하기
    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);

    return 0;
}
