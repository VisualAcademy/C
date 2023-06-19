#include <stdio.h>

// ������ ����: Ŀ�� ũ��
enum CoffeeSize
{
    SMALL,   // ���� ������
    MEDIUM,  // �߰� ������
    LARGE    // ū ������
};

int main(void)
{
    enum CoffeeSize size = MEDIUM; // ������ ���� ���� �� �� �Ҵ�

    int price;

    // ũ�⿡ ���� ���� ����
    switch (size)
    {
    case SMALL:
        price = 2000;
        break;
    case MEDIUM:
        price = 3000;
        break;
    case LARGE:
        price = 4000;
        break;
    default:
        price = 0;
        break;
    }

    // Ŀ�� ���� ���
    printf("Ŀ�� ����: %d��\n", price);

    return 0;
}
