#include <stdio.h>
#include <string.h>

void main()
{
    //������/���ڰ� ��

    char* i = "�ȳ�";
    char* j = "�ȳ�2";

    // ���ڿ� ��
    // if (i == j)
    if (strcmp(i, j) == 0)
    {
        printf("�����ϴ�.\n");
    }
    else
    {
        printf("�ٸ��ϴ�.\n");
    }
}
