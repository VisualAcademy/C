// strchr �Լ��� ���ڿ����� ���� ã�� 
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "C language"; // ���� ���ڿ� 
    int  ch = 'a'; // ã�� ����

    char* pfind; // ã�� ���ڿ� ���� �׸�
    int position = 0; // ã�� ������ ��ġ

    // ������ �˻�
    pfind = strchr(string, ch);

    if (pfind != NULL) // ã�� ���ϸ� NULL ��ȯ
    {
        printf("%s\n", pfind); // anguage
        position = (int)(pfind - string + 1); // �տ������� ã�� ������ ��ġ ���
        printf("%d\n", position); // 4 
    }

    return 0; 
}
