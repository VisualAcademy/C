// �빮�ڷ� ���� : strupr()
// �ҹ��ڷ� ���� : strlwr()
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[80];

    printf("���� ���ڿ��� �Է� : ");
    fgets(buffer, sizeof(buffer), stdin);

    strupr(buffer); // String UpperCase
    printf("%s", buffer);

    strlwr(buffer); // String LowerCase
    printf("%s", buffer);

    return 0;
}
