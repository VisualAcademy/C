#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1024

int main(void)
{
    FILE* fp;
    char buffer[SIZE];

    // ���� �����͸� ���Ͽ� ����
    fp = fopen("largefile.txt", "w");  // ������ ���� ���� ����
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) // largefile.txt�� �뷮�� �����͸� �ۼ�
    {
        fprintf(fp, "�̰��� �׽�Ʈ ������ %d�Դϴ�.\n", i);
    }
    fclose(fp);  // ���Ⱑ ���� �Ŀ� ������ �ݾ��ݴϴ�.

    // ������ �б� ���� �ٽ� ����
    fp = fopen("largefile.txt", "r");
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
