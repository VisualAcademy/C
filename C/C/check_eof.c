#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "test.txt" ������ ����� �б� ���(w+)�� ����
    FILE* file = fopen("test.txt", "w+");

    // ���� ���Ⱑ ���������� ���� ��� ���� �޽��� ���
    if (file == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    // "End Of File" ���ڿ��� ���Ͽ� ����
    fputs("End Of File", file);

    // ���� �����͸� ������ ó������ �ǵ�����
    rewind(file);

    char c;
    // ���Ͽ��� ���ڸ� �ϳ��� �о� ����ϱ�. EOF�� ������ ������ �ݺ�
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    // ������ ��(EOF)�� �����ߴ��� Ȯ��
    if (feof(file))
    {
        printf("\n������ ���� �����Ͽ����ϴ�.\n");
    }
    else
    {
        printf("\n���� �бⰡ �Ϸ�Ǿ����ϴ�.\n");
    }

    // ������ �ݱ�
    fclose(file);
    return 0;
}
