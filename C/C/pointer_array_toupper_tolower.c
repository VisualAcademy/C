#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[80];
    printf("���ڿ��� �Է��ϼ���: "); // ����ڷκ��� ���ڿ� �Է� �ޱ�
    fgets(str, 80, stdin); // ���ڿ� �Է� �ޱ�

    const char* p = str;
    while (*p)
    {
        *p = toupper(*p); // �빮�ڷ� ��ȯ
        p++;
    }
    puts(str); // ���ڿ� ���

    p = str;
    while (*p)
    {
        *p = tolower(*p); // �ҹ��ڷ� ��ȯ
        p++;
    }
    puts(str); // ���ڿ� ���

    return 0;
}
