#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    char str[100];
    int count = 0;
    bool in_word = false; // 단어 안에 있는지를 확인하는 변수

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", str); // 사용자로부터 문자열을 입력받음. 공백도 허용

    // 문자열을 순회하면서 단어 수를 세는 for loop
    for (int i = 0; str[i] != '\0'; i++)
    {
        // 현재 문자가 공백이라면 단어를 빠져나옴
        if (isspace(str[i]))
        {
            in_word = false;
        }
        // 공백이 아니고 단어 안에 있지 않다면 새로운 단어로 간주
        else if (!in_word)
        {
            in_word = true;
            count++; // 단어 수를 증가
        }
    }

    printf("단어의 수는: %d\n", count); // 단어의 수를 출력

    return 0;
}
