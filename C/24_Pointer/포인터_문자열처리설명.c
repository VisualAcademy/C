// ������_���ڿ�ó������.c
#include <stdio.h>

void main()
{
    char c = 'A';	// ����
    char* s; // string s; // ������

    s = "�ȳ���\0����.";

    printf("%c %s\n", c, s);
    printf("%s\n", s + 7);//����1Byte, �ѱ�2Byte
}
