// strrchr �Լ��� ���ڿ� �ڿ������� ���� ã�� 
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "C language"; // ���� ���ڿ� 
    int  ch = 'a'; // ã�� ����

    char* pfind; // ã�� ���ڿ� ���� �׸�
    int position = 0; // ã�� ������ ��ġ

    // ������ �˻�
    pfind = strrchr(string, ch);

    if (pfind != NULL) // ã�� ���ϸ� NULL ��ȯ
    {
        printf("%s\n", pfind); // age
        position = (int)(pfind - string + 1); // �ڿ������� ã�� ������ ��ġ ���
        printf("%d\n", position); // 8 
    }

    return 0;
}
