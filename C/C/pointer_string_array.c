// ���ڿ� ������ �迭 ����ϱ� (Printing an Array of String Pointers)
#include <stdio.h>

int main(void)
{
    // ���ڿ� ������ �迭 ����� �ʱ�ȭ
    const char* strs[] = { "aaa", "bbb", "ccc", "ddd", "eee" };

    // b �迭�� ��ҵ��� ����ϴ� for ����
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", strs[i]);
    }

    return 0;
}
