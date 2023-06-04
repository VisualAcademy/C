#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, words = 0;
    printf("문자열을 입력하세요: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            words++;
        }
    }
    // 마지막 단어는 '\n'에 의해 증가되므로 1을 빼준다.
    if (words > 0)
    {
        words--;
    }
    printf("주어진 문자열에서의 단어 수: %d\n", words + 1);
    return 0;
}
