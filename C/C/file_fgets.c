#include <stdio.h>

int main(void)
{
    FILE* fp;
    char str[100];

    fp = fopen("input.txt", "r"); // "input.txt" ������ �б� ���� ����
    if (fp == NULL)
    {
        printf("Error: ������ �� �� �����ϴ�.\n");
        return 1;
    }

    // fgets �Լ� ���
    while (fgets(str, 100, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
