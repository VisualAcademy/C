#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2;
    float num3;
    char str[100];
    FILE* fp;

    // ������ ���� ���("w")�� ���� ���� �����͸� �����մϴ�.
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���� �����͸� ���Ͽ� ���ϴ�.
    fprintf(fp, "10 3.14 20 Hello, World!");

    // ������ �ݽ��ϴ�.
    fclose(fp);

    // ������ �б� ���("r")�� ���� �����͸� �н��ϴ�.
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ��� ����ȭ�� ���ڿ��� �н��ϴ�.
    //fscanf(fp, "%d %f %d %[^\n]", &num1, &num3, &num2, str);
    fscanf(fp, "%d %f %d %s", &num1, &num3, &num2, str);

    // ���Ͽ��� ���� �����͸� ȭ�鿡 ����մϴ�.
    printf("%d, %f, %d, %s\n", num1, num3, num2, str);

    // ������ �ݽ��ϴ�.
    fclose(fp);

    return 0;
}
