//[?] _strlwr_s() �Լ�: ���ڿ��� ��� �ҹ��ڷ� ���� 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "C Language";

    printf("%s\n", str); // C Language

    _strlwr_s(str, 20); // strlwr(): ��ǥ�� ������

    printf("%s\n", str); // c language

    return 0;
}
