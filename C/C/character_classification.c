#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c = '9'; // �˻��� ����

    if (isdigit(c))
    {
        printf("%c�� �����Դϴ�.\n", c); // c�� �������� Ȯ�� �� ��� ���
    }

    c = 'a';

    if (isalpha(c))
    {
        printf("%c�� ���ĺ��Դϴ�.\n", c); // c�� ���ĺ����� Ȯ�� �� ��� ���
    }

    c = '1';

    if (isalnum(c))
    {
        printf("%c�� ���� Ȥ�� ���ĺ��Դϴ�.\n", c); // c�� ���ĺ� �Ǵ� �������� Ȯ�� �� ��� ���
    }

    c = ' ';

    if (isspace(c))
    {
        printf("���� �����Դϴ�.\n"); // c�� ���� �������� Ȯ�� �� ��� ���
    }

    c = '!';

    if (ispunct(c))
    {
        printf("%c�� Ư�������Դϴ�.\n", c); // c�� Ư���������� Ȯ�� �� ��� ���
    }

    c = 'A';

    if (isprint(c))
    {
        printf("%c�� ��� ������ �����Դϴ�.\n", c); // c�� ��� ������ �������� Ȯ�� �� ��� ���
    }

    return 0;
}
