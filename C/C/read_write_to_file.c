#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file;

    // ���� ���� (���� ���)
    file = fopen("demo.txt", "w");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ� ���ڿ��� ���� ����
    char* name = "ȫ�浿";
    int age = 21;
    fprintf(file, "%s %d\n", name, age);

    // ���� �ݱ�
    fclose(file);

    // ���� �ٽ� ���� (�б� ���)
    file = fopen("demo.txt", "r");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ��� ���ڿ��� ���� �б�
    char readName[50];
    int readAge;
    fscanf(file, "%s %d", readName, &readAge);

    // ���� ������ ���
    printf("�̸�: %s, ����: %d\n", readName, readAge);

    // ���� �ݱ�
    fclose(file);

    return 0;
}
