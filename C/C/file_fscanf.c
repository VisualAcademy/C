#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int num1, num2;
    float num3;
    char str[100];
    FILE* fp;

    // ������ ����.
    fp = fopen("data.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file\n");
        return 1;
    }

    // ���Ͽ��� ����ȭ�� ���ڿ��� �д´�.
    fscanf(fp, "%d%f%d%s", &num1, &num3, &num2, str);

    // ���Ͽ��� ���� �����͸� ȭ�鿡 ����Ѵ�.
    printf("%d, %f, %d, %s\n", num1, num3, num2, str);

    // ������ �ݴ´�.
    fclose(fp);

    return 0;
}
