#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    char str[] = "�ȳ��ϼ���";
    int count = 6;
    fprintf(file, "%s�� %d�����Դϴ�.\n", str, count);

    fclose(file);
    return 0;
}
