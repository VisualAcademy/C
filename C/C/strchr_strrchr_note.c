#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "C Language";

    char* ptr = strchr(str, 'a');   // str ���ڿ����� 'a' ���� �˻�
    printf("%s\n", ptr);            // ange

    ptr = strrchr(str, 'a');        // str ���ڿ����� 'a' ���� ���� �˻�
    printf("%s\n", ptr);            // age

    return 0;
}