// ������_�����͹迭�ʱ�ȭ.c
#include <stdio.h>

int main(void)
{
    const char* a[] = { "�ƺ�", "����", "�Ƶ�", "����" }; 

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
