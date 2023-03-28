/*
    �Լ� : ���ڿ� ���� ���� �Լ� �����
*/

#include <stdio.h>   // printf
#include <ctype.h>   // isspace
#include <string.h>  // strlen

// �Լ� ����
char* TrimLeft(char* string);
char* Trim(char* string);
char* TrimRight(char* string);

// ���� �Լ�
int main(void)
{
    char str1[] = " Abc Cba ";
    char str2[] = " Abc Cba ";
    char str3[] = " Abc Cba ";

    printf("[%s]\n", TrimLeft(str1));
    printf("[%s]\n", TrimRight(str2));
    printf("[%s]\n", Trim(str3));

    return 0;
}

// ���� ���� ���� �Լ�
char* TrimLeft(char* string)
{
    while (*string)
    {
        if (isspace(*string))
        {
            ++string; //*(++string);
        }
        else
        {
            break;
        }
    }
    return string;
}

// ������ ���� ���� �Լ�
char* TrimRight(char* string)
{
    int len = (int)strlen(string) - 1;

    while (len >= 0)
    {
        if (isspace(*(string + len)))
        {
            len--;
        }
        else
        {
            break;
        }
    }
    *(string + ++len) = 0;
    return string;
}

// ���� ���� ���� �Լ�
char* Trim(char* string)
{
    return (TrimLeft(TrimRight(string)));
}
