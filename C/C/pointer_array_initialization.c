// ���ڿ� ���ͷ��� �����ϴ� ������ �迭 ����ϱ�
#include <stdio.h>

int main(void)
{
    const char* family[] = { "�ƺ�", "����", "�Ƶ�", "����" };

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", family[i]);
    }

    return 0;
}
