#include <stdio.h>

int main()
{
    int data[] = { 3, 2, 1, 4, 5 };
    int sum = 0;
    int* p;

    p = data; // �迭�� ���� �ּҸ� �����Ϳ� ���

    // �����͸� �ݺ�: ������ ������ ���ؼ� �ݺ�
    for (int i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        if (*(p + i) % 2 == 0) // ¦�� ���͸�
        {
            sum += *(p + i); // ¦���� ��
        }
    }

    printf("¦���� ��: %d\n", sum);

    return 0;
}
