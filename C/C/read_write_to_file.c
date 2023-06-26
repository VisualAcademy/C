#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file;

    // 파일 열기 (쓰기 모드)
    file = fopen("demo.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에 문자열과 숫자 저장
    char* name = "홍길동";
    int age = 21;
    fprintf(file, "%s %d\n", name, age);

    // 파일 닫기
    fclose(file);

    // 파일 다시 열기 (읽기 모드)
    file = fopen("demo.txt", "r");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에서 문자열과 숫자 읽기
    char readName[50];
    int readAge;
    fscanf(file, "%s %d", readName, &readAge);

    // 읽은 데이터 출력
    printf("이름: %s, 나이: %d\n", readName, readAge);

    // 파일 닫기
    fclose(file);

    return 0;
}
