//[?] strstr 함수로 문자열 검색하기
#include <stdio.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void)
{
    // 문자열 "C Coding!!!"을 포함하는 char 배열 buffer 선언 및 초기화
    char buffer[] = "C Coding!!!";

    // buffer에서 "ing"이라는 문자열을 검색하고, 검색된 위치를 가리키는 포인터 pfind에 저장
    char* pfind = strstr(buffer, "ing");

    // pfind가 가리키는 위치부터 문자열을 출력
    printf("%s\n", pfind); // ing!!!

    return 0;
}
