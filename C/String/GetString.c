#include <stdio.h>

int main(void)
{
    char buffer[80];
    int first = 0;
    int second = 0;
    int max = 0;

    printf("ù ��° ��: ");
    gets(buffer); // ���ڿ��� ���� �� �ִ� �׸��� ����
    first = atoi(buffer); // ���ڿ� ������ ���ڸ� ���� ���� �������� ��ȯ

    printf("�� ��° ��: ");
    gets(buffer);
    second = atoi(buffer);

    // ����(3��) �����ڸ� ����Ͽ� ū �� ���ϱ� 
    max = (first > second) ? first : second;
    printf("ū ��: %d\n", max);

    return 0;
}
