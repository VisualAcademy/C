// strstr �Լ��� ���ڿ����� ���ڿ� ã�� 
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[] = "C language"; // ���� ���ڿ� 

    char* pfind; // ã�� ���ڿ� ���� �׸�
    int position = 0; // ã�� ���ڿ��� ���� ��ġ

    // ���ڿ� �˻�
    pfind = strstr(string, "age"); // "age" ���ڿ� ã�� 

    if (pfind != NULL) // ã�� ���ϸ� NULL ��ȯ
    {
        printf("%s\n", pfind); // age
        position = (int)(pfind - string + 1); // �տ������� ã�� ���ڿ��� ���� ��ġ
        printf("%d\n", position); // 8 
    }

    return 0;
}
