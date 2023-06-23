#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push, 1) // 구조체 내부의 패딩을 없애기 위한 설정 시작
struct Person
{
    char name[20];
    int age;
    float height;
};
#pragma pack(pop) // 구조체 내부의 패딩 설정 종료

int main(void)
{
    // "person.bin" 파일을 바이너리 읽기 모드로 열기
    FILE* fp = fopen("person.bin", "rb");

    // 파일 열기에 실패한 경우 에러 메시지 출력
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    // Person 구조체의 인스턴스 생성
    struct Person p1;

    // 파일로부터 구조체 데이터 읽어오기
    fread(&p1, sizeof(struct Person), 1, fp);

    // 읽어온 구조체 데이터 출력
    printf("이름: %s, 나이: %d, 키: %.2f\n", p1.name, p1.age, p1.height);

    // 파일 닫기
    fclose(fp);

    // 정상 종료
    return 0;
}
