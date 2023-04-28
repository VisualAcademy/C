#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h> // 표준 입출력 라이브러리를 포함

int main(void)
{
    FILE* file; // 파일 포인터 선언
    char buffer[80]; // 파일에서 읽은 문자열을 저장할 버퍼

    file = fopen("example.txt", "r"); // 'example.txt' 파일을 읽기 모드로 연다
    if (file == NULL) // 파일 열기에 실패한 경우
    {
        printf("example.txt 파일이 없습니다. 생성합니다.\n");

        // 'example.txt' 파일을 쓰기 모드로 연다
        file = fopen("example.txt", "w");
        if (file == NULL) // 파일 생성에 실패한 경우
        {
            printf("파일 생성에 실패했습니다.\n");
            return 1; // 프로그램 종료 (1 반환)
        }

        // 파일에 문자열 작성
        fprintf(file, "예제 파일입니다.\n");
        fclose(file); // 파일을 닫는다

        // 다시 'example.txt' 파일을 읽기 모드로 연다
        file = fopen("example.txt", "r");
        if (file == NULL) // 파일 열기에 실패한 경우
        {
            printf("파일을 열지 못했습니다.\n");
            return 1; // 프로그램 종료 (1 반환)
        }
    }

    // 파일의 끝에 도달할 때까지 한 줄씩 읽어서 버퍼에 저장
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer); // 읽은 줄을 출력
    }

    fclose(file); // 파일을 닫는다
    return 0; // 프로그램 종료 (0 반환)
}
