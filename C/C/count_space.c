#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 

int main(void)
{
    int count = 0;
    int i = 0;
    char str[1001];
    char ch;

    printf("문자열을 입력하세요: ");

    // scanf로 문자열을 받되, 공백 포함을 위해 %[^\n]를 사용
    scanf("%[^\n]", str);

    while (1)
    {
        ch = str[i]; // 현재 위치의 문자를 받아옴

        // 만약 현재 문자가 문자열의 끝이라면 반복문 종료
        if (ch == '\0')
        {
            break;
        }
        // 만약 현재 문자가 공백이 아니고, 다음 문자가 공백이거나 문자열의 끝이라면 단어로 간주
        else if ((ch != ' ') && ((str[i + 1] == ' ') || (str[i + 1] == '\0')))
        {
            count++; // 단어 개수 증가
        }
        i++;
    }
    printf("단어의 수는: %d\n", count); // 단어의 수 출력

    return 0;
}
