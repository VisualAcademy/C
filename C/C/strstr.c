// strstr �Լ��� ���ڿ� �˻��ϱ�
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[] = "C Coding!!!";

    char* pfind = strstr(buffer, "ing");

    printf("%s\n", pfind); // ing!!!

    return 0;
}
