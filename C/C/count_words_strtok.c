#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int word_count = 0; // 단어의 수를 저장할 변수

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]", str); // 문자열을 입력받음. 공백도 포함하여 입력받을 수 있음

    char* token = strtok(str, " \t\n"); // 첫 번째 토큰을 가져옴
    while (token != NULL)
    {
        word_count++; // 토큰이 하나의 단어이므로 단어 수를 증가
        token = strtok(NULL, " \t\n"); // 다음 토큰을 가져옴
    }

    printf("문자열 안의 단어 수는: %d\n", word_count); // 단어 수 출력

    return 0;
}
