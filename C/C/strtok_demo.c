// strtok 함수로 문자열에서 구분자로 문자열 분리하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char csv[] = "red,green,blue";
    char seps[] = ",";
    char* token = NULL;
    char* next_token = NULL; 

    token = strtok(csv, seps, &next_token);

    if (token != NULL)
    {
        printf("%s\n", token); // "red"
        token = strtok(NULL, seps, &next_token);
        if (token != NULL)
        {
            printf("%s\n", token); // "green"
            token = strtok(NULL, seps, &next_token);
            if (token != NULL)
            {
                printf("%s\n", token); // "blue"
            }
        }
    }

    return 0;
}
