#include <stdio.h>

// ������ Color ����
enum Color
{
    Red,   // 0
    Green, // 1
    Blue   // 2
};

int main(void)
{
    // Red(0)���� Blue(2)���� �ݺ�
    for (enum Color color = Red; color <= Blue; ++color)
    {
        // ���� �ε��� ���
        printf("���� �ε���: %d\n", color);
    }

    return 0; // ���� ����
}
