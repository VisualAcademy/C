#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 200

int main(void)
{
    FILE* fp;
    char buffer[SIZE];

    // data.txt ���Ͽ� ���� ������ ����
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "C ��� ���� ����� �����Դϴ�.\n");
    fclose(fp);

    // data.txt ���� �б�
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    while (fgets(buffer, SIZE, fp) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
