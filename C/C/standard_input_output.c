#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    // ǥ�� �Է�(stdin)���κ��� �̸��� ���̸� �Է� �޽��ϴ�.
    printf("�̸��� �Է��ϼ���: ");
    fscanf(stdin, "%s", name);
    printf("���̸� �Է��ϼ���: ");
    fscanf(stdin, "%d", &age);

    // ǥ�� ���(stdout)�� �̸��� ���̸� ����մϴ�.
    fprintf(stdout, "����� �̸��� %s�̰�, ���̴� %d�� �Դϴ�.\n", name, age);

    return 0;
}
