#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const char* week[] = { "������", "ȭ����", "������", "�����", "�ݿ���", "�����", "�Ͽ���" };

    int i;

    printf("���ڸ� �Է��ϼ���.(0~6) : ");
    scanf("%d", &i);

    printf("������ ���ڿ� �ش�Ǵ� ������ %s�Դϴ�.\n", week[i]);

    return 0;
}
