// �빮�ڷ� ���� : strupr()
// �ҹ��ڷ� ���� : strlwr()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[80];

    printf("���� ���ڿ��� �Է� : ");
    fgets(buffer, sizeof(buffer), stdin);

    _strupr(buffer); // String UpperCase
    printf("%s", buffer);

    _strlwr(buffer); // String LowerCase
    printf("%s", buffer);

    return 0;
}
