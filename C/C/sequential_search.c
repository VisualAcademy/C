#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 0;
    int data[] = { 1, 3, 5, 7, 9, 11 };
    int search = 0;
    int n = sizeof(data) / sizeof(data[0]);
    bool flag = false;

    printf("�˻��� ����(1~20): __\b\b");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (search == data[i])
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        printf("%d��(��) ã�ҽ��ϴ�.\n", search);
    }
    else
    {
        printf("%d��(��) �� ã�ҽ��ϴ�.\n", search);
    }

    return 0;
}
