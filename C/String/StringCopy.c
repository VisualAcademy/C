#include <stdio.h>
#include <string.h>

int main()
{
    char messages[6];

    //[?] C ���� ���� �迭�� ���� ���ͷ��� ����ؼ� �ʱ�ȭ �Ұ���
    //messages = "C/C++";

    //[!] ���� �迭�� ���� ���ͷ��� �ʱ�ȭ�� ������ strcpy() �Լ� ���
    strcpy(messages, "C/C++");

    puts(messages);

    return 0;
}
