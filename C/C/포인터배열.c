#include <stdio.h>

int main(void)
{
    char a[] = "�ȳ�\0�ϼ���.";
    char* b;
    char* c[2];

    b = "�ݰ����ϴ�.";
    c[0] = "�Ǻ�~";
    c[1] = "����~";

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s %s\n", c[0], c[1]);

    return 0;
}
