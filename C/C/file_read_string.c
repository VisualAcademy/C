#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>

int main(void)
{
    FILE* file; // 파일 포인터 선언
    char str[100]; // 문자열을 저장할 배열 선언

    file = fopen("example.txt", "r"); // example.txt 파일을 읽기 모드로 열기

    if (file == NULL) // 파일 열기 실패 시
    {
        printf("파일을 열 수 없습니다.\n"); // 에러 메시지 출력
        return 1; // 비정상 종료
    }

    while (fgets(str, sizeof(str), file) != NULL) // 파일에서 한 줄씩 읽어옴
    {
        printf("%s", str); // 읽어온 문자열 출력
    }

    fclose(file); // 파일 포인터를 닫음
    return 0; // 정상 종료
}
