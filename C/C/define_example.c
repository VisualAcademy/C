#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_LENGTH 100

int main(void) 
{
    char str[MAX_LENGTH];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    printf("입력한 문자열: %s\n", str);
    return 0;
}
