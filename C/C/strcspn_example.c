#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str1[] = "C Programming language";
    const char str2[] = "Pro";

    printf("str2�� ���ڵ��� str1�� ó�� ��Ÿ���� ��ġ������ ����: %lu\n",
        strcspn(str1, str2));
    return(0);
}
