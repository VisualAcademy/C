// ���ڿ� ���� : strlen(): String Length
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* str = " Abc Def Fed Cba ";

    puts(str);
    printf("���ڿ� ���� : %zu\n", strlen(str)); // Length�� n - 1 ��Ģ ������ 

    return 0;
}
