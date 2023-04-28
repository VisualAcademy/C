#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>

int main(void)
{
    FILE* file; // 파일 포인터를 선언

    file = fopen("example.txt", "w"); // 'example.txt' 파일을 쓰기 모드로 연다
    if (file == NULL) // 파일 열기에 실패한 경우
    {
        printf("파일을 열지 못했습니다.\n");
        return 1; // 프로그램 종료 (1 반환)
    }

    fputs("안녕하세요.", file); // 파일에 문자열을 쓴다
    fclose(file); // 파일을 닫는다

    printf("파일 작성에 성공했습니다.\n"); // 작성 성공 메시지를 출력한다
    return 0; // 프로그램 종료 (0 반환)
}
