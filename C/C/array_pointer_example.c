#include <stdio.h>

int main(void)
{
    // �迭 numbers�� �����ϰ� �ʱ�ȭ
    int numbers[] = { 10, 20, 30, 40, 50 };

    // ������ p�� �����ϰ� �迭 numbers�� ù ��° ������ �ּҸ� �Ҵ�
    int* p = numbers;

    // �����͸� ����Ͽ� �迭�� ���� ���
    printf("%d %d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
