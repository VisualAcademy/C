#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str1[] = "C Programming language";
    const char str2[] = "C Pro";

    printf("str1���� str2�� ���ڵ��� �������� ��ġ�ϴ� �κ��� ����: %lu\n"
        , strspn(str1, str2));
    return(0);
}
