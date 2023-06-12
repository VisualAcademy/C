#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 중복 문자 제거 함수
void removeDuplicates(char* str)
{
    int len = strlen(str);
    int i, j, k;

    // 문자열 길이만큼 반복
    for (i = 0; i < len; i++)
    {
        // 다음 문자부터 검사
        for (j = i + 1; j < len; j++)
        {
            // 문자가 중복되면
            if (str[i] == str[j])
            {
                // 중복 문자 제거
                for (k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }
                // 문자열 길이 감소
                len--;
                j--;
            }
        }
    }
    // 마지막 문자 NULL로 변경
    str[len] = '\0';
}

int main(void)
{
    char str[20];

    // 사용자에게 문자열 입력 받음
    printf("문자열을 입력하세요 (최대 20자): ");
    scanf("%s", str);

    // 중복 문자 제거 함수 호출
    removeDuplicates(str);

    // 중복 문자 제거 후 문자열 출력
    printf("중복을 제거한 문자열: %s\n", str);

    return 0;
}
