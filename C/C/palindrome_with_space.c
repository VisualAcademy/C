#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char text[31];  // 입력받을 문자열

    scanf("%[^\n]s", text);  // 공백을 포함하여 문자열 입력받기

    int length;
    bool isPalindrome = true;  // 회문 여부, 초기값은 참으로 설정

    length = strlen(text);  // 입력받은 문자열의 길이 계산

    int begin = 0;
    int end = length - 1;

    // 문자열의 양 끝에서부터 중앙까지 비교
    while (begin < end)
    {
        // 왼쪽 끝의 공백 무시
        while (text[begin] == ' ')
        {
            begin++;
        }

        // 오른쪽 끝의 공백 무시
        while (text[end] == ' ')
        {
            end--;
        }

        // 비교하려는 두 문자가 다르다면, 회문이 아님
        if (text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }

        begin++;
        end--;
    }

    // 결과 출력, 회문이면 1, 아니면 0
    printf("%d\n", isPalindrome);

    return 0;
}
