#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file;

    // ���� ���� (���� ���)
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ� ������ ����
    fprintf(file, "�̸�: %s\n", "ȫ�浿");
    fprintf(file, "����: %d\n", 30);
    fprintf(file, "Ű: %.2f\n", 175.5);

    // ���� �ݱ�
    fclose(file);

    printf("�����Ͱ� example.txt ���Ͽ� ����Ǿ����ϴ�.\n");

    return 0;
}
