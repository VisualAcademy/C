#include <stdio.h>
#include <string.h>

int main(void)
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

    return 0;
}
