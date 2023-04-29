#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h> // 표준 입출력 라이브러리 헤더 파일 포함

int main(void)
{
    FILE* file = fopen("example.txt", "r"); // example.txt 파일을 읽기 모드로 열기

    if (file == NULL) // 파일 열기 실패 시
    {
        printf("파일 열기 실패\n"); // 실패 메시지 출력
        return 1; // 에러 코드 1 반환
    }

    fseek(file, 0, SEEK_END); // 파일 포인터를 파일 끝으로 이동
    long int size = ftell(file); // 파일 포인터의 현재 위치를 바이트 단위로 얻어와 파일 크기 저장

    printf("파일 크기: %ld 바이트\n", size); // 파일 크기 출력

    fclose(file); // 파일 닫기
    return 0; // 정상 종료
}
