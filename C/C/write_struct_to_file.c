#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 패딩을 없애기 위해 #pragma pack 지시자 사용
#pragma pack(push, 1)
struct Person
{
    char name[20];
    int age;
    float height;
};
#pragma pack(pop)

int main(void)
{
    // person.bin 파일을 쓰기 모드(wb)로 연다.
    FILE* fp = fopen("person.bin", "wb");

    // 파일 열기에 실패했을 경우
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    // Person 구조체 변수 생성 및 초기화
    struct Person p1;
    strcpy(p1.name, "Kodee");
    p1.age = 30;
    p1.height = 5.5;

    // 구조체를 파일에 쓴다.
    fwrite(&p1, sizeof(struct Person), 1, fp);

    // 파일을 닫는다.
    fclose(fp);

    // 성공 메시지 출력
    printf("구조체가 파일에 성공적으로 쓰여졌습니다.\n");

    return 0;
}
