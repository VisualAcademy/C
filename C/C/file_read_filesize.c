#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;

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
        printf("������ ã�� �� �����ϴ�.\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    rewind(fp);

    char* buffer = (char*)malloc(size + 1);  // �� ���ڸ� ���� 1�� �߰�
    fread(buffer, 1, size, fp);
    buffer[size] = '\0';  // ���� �� ���� �߰�

    fclose(fp);

    printf("���� ������: %s\n", buffer);
    free(buffer);  // �Ҵ��� �޸� ����

    return 0;
}
