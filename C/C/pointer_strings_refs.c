#include <stdio.h>

int main(void)
{
    char* p[] = { "C", "C++", "C#", "Java" };
    char** pp = p; // ���� ������ ���� �� ������ �迭 ����

    //[1] ���� �迭 ��� ���
    for (int i = 0; i < 4; i++)
    {
        printf("p[%d] = %s\n", i, p[i]);
    }

    //[2] ���� ������ ��� ��� 
    for (int i = 0; i < 4; i++)
    {
        printf("\n*pp = %s", *pp);
        pp++;
    }

    return 0;
}
