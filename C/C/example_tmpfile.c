#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE* ptr;
    ptr = tmpfile();
    char data[] = "C Language";
    int i = 0;

    // �ӽ� ���� ���� ���� Ȯ��
    if (ptr == NULL)
    {
        printf("�ӽ� ���� ������ �����߽��ϴ�.\n");
        return 1;
    }

    // data ���ڿ��� �ӽ� ���Ͽ� �� ���ھ� ����
    while (data[i])
    {
        fputc(data[i++], ptr);
    }

    // ���� �����͸� ���� ��ġ�� �̵�
    rewind(ptr);

    // �ӽ� ������ ������ �� ���ھ� �о� ���
    while (!feof(ptr))
    {
        printf("%c", fgetc(ptr));
    }

    printf("\n");

    return 0;
}
