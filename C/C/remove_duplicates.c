#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �ߺ� ���� ���� �Լ�
void removeDuplicates(char* str)
{
    int len = strlen(str);
    int i, j, k;

    // ���ڿ� ���̸�ŭ �ݺ�
    for (i = 0; i < len; i++)
    {
        // ���� ���ں��� �˻�
        for (j = i + 1; j < len; j++)
        {
            // ���ڰ� �ߺ��Ǹ�
            if (str[i] == str[j])
            {
                // �ߺ� ���� ����
                for (k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }
                // ���ڿ� ���� ����
                len--;
                j--;
            }
        }
    }
    // ������ ���� NULL�� ����
    str[len] = '\0';
}

int main(void)
{
    char str[20];

    // ����ڿ��� ���ڿ� �Է� ����
    printf("���ڿ��� �Է��ϼ��� (�ִ� 20��): ");
    scanf("%s", str);

    // �ߺ� ���� ���� �Լ� ȣ��
    removeDuplicates(str);

    // �ߺ� ���� ���� �� ���ڿ� ���
    printf("�ߺ��� ������ ���ڿ�: %s\n", str);

    return 0;
}
