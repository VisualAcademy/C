#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char correct_id[] = "user1234";
    char correct_password[] = "password1234";

    char input_id[50];
    char input_password[50];

    printf("���̵� �Է��ϼ���: ");
    scanf("%s", input_id);
    printf("��ȣ�� �Է��ϼ���: ");
    scanf("%s", input_password);

    if (strcmp(input_id, correct_id) == 0 && strcmp(input_password, correct_password) == 0)
    {
        printf("�α��� ����!\n");
    }
    else
    {
        printf("�α��� ����. ���̵� �Ǵ� ��ȣ�� �ùٸ��� �ʽ��ϴ�.\n");
    }

    return 0;
}