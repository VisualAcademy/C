#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    char str[100];
    int count;
    fscanf(file, "%99s��(��) %d���� ���ڸ� ������ �ֽ��ϴ�.\n", str, &count);
    printf("%s��(��) %d���� ���ڸ� ������ �ֽ��ϴ�.\n", str, count);

    fclose(file);
    return 0;
}
