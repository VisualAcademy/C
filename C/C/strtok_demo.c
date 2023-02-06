// strtok �Լ��� ���ڿ����� �����ڷ� ���ڿ� �и��ϱ�
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
