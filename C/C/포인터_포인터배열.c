#include <stdio.h>

int main(void)
{
    // ���� �迭 ����� �ʱ�ȭ
    char a[] = { 'a', 'b', 'c', 'd', 'e' };

    // ���ڿ� ������ �迭 ����� �ʱ�ȭ
    const char* b[] = { "aaa", "bbb", "ccc", "ddd", "eee" };

    // b �迭�� ��ҵ��� ����ϴ� for ����
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", b[i]);
    }

    return 0;
}
