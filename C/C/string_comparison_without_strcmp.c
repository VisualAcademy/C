#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("두 문자열을 입력하세요: ");
    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++)
    {
        // 문자열의 각 문자를 비교하고 같으면 계속 진행합니다.
    }

    if (str1[i] < str2[i])
    {
        printf("%s이(가) %s보다 작습니다.\n", str1, str2);
    }
    else if (str1[i] > str2[i])
    {
        printf("%s이(가) %s보다 작습니다.\n", str2, str1);
    }
    else
    {
        printf("%s과(와) %s는 같습니다.\n", str1, str2);
    }

    return 0;
}
