#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'a'; // �˻��� �ҹ���
    char c2 = 'A'; // �˻��� �빮��

    if (islower(c1))
    {
        printf("%c�� �ҹ����Դϴ�.\n", c1); // c1�� �ҹ������� Ȯ�� �� ��� ���
    }

    if (isupper(c2))
    {
        printf("%c�� �빮���Դϴ�.\n", c2); // c2�� �빮������ Ȯ�� �� ��� ���
    }

    return 0;
}
