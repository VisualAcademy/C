#define _CRT_SECURE_NO_WARNINGS // �� ���� Visual Studio���� ���� ����� �����ϴ� �� ���˴ϴ�.
#include <stdio.h>  // ǥ�� ����� �Լ��� ���� ��� �����Դϴ�.
#include <string.h> // ���ڿ� ó���� ���� ��� �����Դϴ�.

int main(void) // ���α׷��� �������� main �Լ��Դϴ�.
{
    char str1[100], str2[100]; // �� ���� ���ڿ��� ������ �迭�� �����մϴ�.

    printf("ù ��° ���ڿ��� �Է��ϼ���: "); // ����ڿ��� ù ��° ���ڿ� �Է��� ��û�մϴ�.
    scanf("%s", str1); // ����ڷκ��� ù ��° ���ڿ��� �Է¹޽��ϴ�.

    printf("�� ��° ���ڿ��� �Է��ϼ���: "); // ����ڿ��� �� ��° ���ڿ� �Է��� ��û�մϴ�.
    scanf("%s", str2); // ����ڷκ��� �� ��° ���ڿ��� �Է¹޽��ϴ�.

    strcat(str1, str2); // ù ��° ���ڿ��� ���� �� ��° ���ڿ��� ���Դϴ�.

    printf("����� ���ڿ�: %s\n", str1); // �� ���ڿ��� ����� ����� ����մϴ�.

    return 0; // ���α׷��� ���������� ����Ǿ����� � ü���� �˸��ϴ�.
}