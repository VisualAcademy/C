#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h> // ǥ�� ����� �Լ��� ����ϱ� ���� ���̺귯��

int main(void)
{
    FILE* file; // ���� ������ ����
    char str[100]; // �Է� ���� ���ڿ��� ������ �迭
    file = fopen("example.txt", "w"); // example.txt ������ ���� ���(w)�� ����

    if (file == NULL) // ���� ���� ���н� ���� �޽��� ��� �� ����
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    printf("������ ���ڿ��� �Է��ϼ���: "); // ����ڿ��� ���ڿ� �Է� ��û
    fgets(str, sizeof(str), stdin); // ����ڷκ��� ���ڿ� �Է� �ޱ�

    fputs(str, file); // �Է� ���� ���ڿ��� ���Ͽ� ����
    fclose(file); // ���� �ݱ�

    printf("���Ͽ� ����Ǿ����ϴ�.\n"); // ���� �Ϸ� �޽��� ���
    return 0;
}
