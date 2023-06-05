#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcmp 함수가 포함된 헤더 파일

int main()
{
    char str1[20];
    char str2[20];

    printf("두 문자열을 입력하세요: ");
    scanf("%s %s", str1, str2); // 사용자로부터 두 문자열 입력받기

    int cmp = strcmp(str1, str2); // 입력된 두 문자열 비교
    printf("반환값: %d\n", cmp);

    if (cmp == 0)
    {
        printf("두 문자열은 동일합니다.\n"); // 반환값이 0일 경우, 두 문자열은 동일
    }
    else if (cmp > 0)
    {
        // 반환값이 양수일 경우, str1이 str2보다 큼
        printf("'%s'는 '%s'보다 사전에서 뒤에 위치합니다.\n", str1, str2);   
    }
    else
    {
        // 반환값이 음수일 경우, str2가 str1보다 큼
        printf("'%s'는 '%s'보다 사전에서 뒤에 위치합니다.\n", str2, str1);   
    }

    return 0;
}
