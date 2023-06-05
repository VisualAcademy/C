#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ���ڿ��� �Ű������� �޾� �ش� ���ڿ��� ������ �� ����� ���ڿ��� ����Ű�� �����͸� ��ȯ�ϴ� �Լ�
char* return_pointer_to_string(char* str)
{
    // �Էµ� ���ڿ��� ���̸� ���ϰ�, �޸𸮸� ���� �Ҵ��մϴ�.
    char* ptr = (char*)malloc(strlen(str) + 1);
    strcpy(ptr, str); // �������� �Ҵ�� �޸𸮿� ���ڿ��� �����մϴ�.

    // ����� ���ڿ��� �ּҸ� ��ȯ�մϴ�.
    return ptr;
}

int main(void)
{
    char* str = "Hello, World!";

    // �Լ��� ȣ���Ͽ� ��ȯ�� �����͸� new_str�� �����մϴ�.
    char* new_str = return_pointer_to_string(str);

    // new_str�� ����Ű�� ���ڿ��� ����մϴ�.
    printf("new_str�� ����Ű�� ���ڿ�: %s\n", new_str);

    // �������� �Ҵ�� �޸𸮸� �����մϴ�.
    free(new_str);

    return 0;
}
