#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    static const char* a[3];

    a[0] = "    "; // �Էµ� ���ڼ���ŭ �������� �ʱ�ȭ
    a[1] = "    ";
    a[2] = "    ";

    scanf("%ms %ms %ms", &a[0], &a[1], &a[2]);
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}
