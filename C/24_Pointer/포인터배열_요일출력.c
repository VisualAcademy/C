// pointer_array_week.c 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char* week[] = 
        { "������", "ȭ����", "������", "�����", "�ݿ���", "�����", "�Ͽ���" };

    int i;

    printf("0 ~ 6 ������ ���ڸ� �Է��ϼ���: ");
    scanf("%d", &i);

    printf("������ ���ڿ� �ش�Ǵ� ������ %s�Դϴ�.\n", week[i]);

    return 0;
}
