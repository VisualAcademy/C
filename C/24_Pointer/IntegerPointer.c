#include <stdio.h>

int main()
{
    // ������ ���� ���� �� �ʱ�ȭ
    int width = 1920;
    int height = 1080;

    // ������ ������ ���� �� ����
    int* w = &width;
    int* h = &height;

    // �������� �� ���
    printf("FHD: %d X %d\n", *w, *h);

    // ������(dereference)�� �� ����
    *w = 3840;
    *h = 2160;

    // �������� �� ���
    printf("UHD: %d X %d\n", *w, *h);

    return 0;
}
