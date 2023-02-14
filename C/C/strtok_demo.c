// `strtok` �Լ��� ���ڿ����� �����ڷ� ���ڿ� �и��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char csv[] = "red,green,blue"; // �и��� ���ڿ�
    char seps[] = ","; // ������ ���ڿ�
    char* token = NULL; // �˻��� ��ū�� ������ ������ ����
    char* next_token = NULL; // ���� �˻� ���� ��ġ�� ������ ������ ����

    token = strtok(csv, seps, &next_token); // ù ��° ��ū �˻�

    if (token != NULL) // ��ū�� NULL�� �ƴ� ���
    {
        printf("%s\n", token); // ù ��° ��ū ��� ("red")
        token = strtok(NULL, seps, &next_token); // �� ��° ��ū �˻�
        if (token != NULL) // ��ū�� NULL�� �ƴ� ���
        {
            printf("%s\n", token); // �� ��° ��ū ��� ("green")
            token = strtok(NULL, seps, &next_token); // �� ��° ��ū �˻�
            if (token != NULL) // ��ū�� NULL�� �ƴ� ���
            {
                printf("%s\n", token); // �� ��° ��ū ��� ("blue")
            }
        }
    }

    return 0;
}
