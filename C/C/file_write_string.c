#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 라이브러리

int main(void)
{
    FILE* file; // 파일 포인터 선언
    char str[100]; // 입력 받을 문자열을 저장할 배열
    file = fopen("example.txt", "w"); // example.txt 파일을 쓰기 모드(w)로 열기

    if (file == NULL) // 파일 열기 실패시 에러 메시지 출력 및 종료
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    printf("저장할 문자열을 입력하세요: "); // 사용자에게 문자열 입력 요청
    fgets(str, sizeof(str), stdin); // 사용자로부터 문자열 입력 받기

    fputs(str, file); // 입력 받은 문자열을 파일에 쓰기
    fclose(file); // 파일 닫기

    printf("파일에 저장되었습니다.\n"); // 저장 완료 메시지 출력
    return 0;
}
