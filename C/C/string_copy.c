#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 피하기 위한 매크로 정의
#include <stdio.h> // 표준 입출력 함수를 위한 헤더 파일 포함
#include <string.h> // 문자열 처리 함수를 위한 헤더 파일 포함

int main(void)
{
    char src[100], dest[100]; // 원본 문자열과 목적지 문자열을 저장할 char형 배열 선언

    printf("원본 문자열을 입력하세요: "); // 사용자에게 원본 문자열 입력 요청 출력
    fgets(src, sizeof(src), stdin); // 표준 입력을 통해 사용자로부터 문자열 받아오기

    strcpy(dest, src); // src의 문자열을 dest로 복사

    printf("복사된 문자열: %s", dest); // 복사된 문자열 출력
    return 0;
}
