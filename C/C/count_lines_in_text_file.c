#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>

int main(void)
{
    // 파일을 읽기 모드로 열기
    FILE* file = fopen("example.txt", "r");
    // 파일 열기 실패 시 오류 메시지 출력 후 종료
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    int n_lines = 0; // 줄 수를 저장할 변수
    char c; // 파일에서 읽은 문자를 저장할 변수
    // 파일 끝(EOF)에 도달할 때까지 문자를 하나씩 읽기
    while ((c = fgetc(file)) != EOF)
    {
        // 줄바꿈 문자(\n)을 발견하면 줄 수 증가
        if (c == '\n')
        {
            n_lines++;
        }
    }

    // 파일에 있는 줄 수를 출력
    printf("파일에 있는 줄 수: %d\n", n_lines);

    // 파일 닫기
    fclose(file);

    // 프로그램 정상 종료
    return 0;
}
