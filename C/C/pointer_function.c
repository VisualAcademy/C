#include <stdio.h>

// 'update_value' �Լ��� ������ �����͸� �Ű������� �޾� �ش� �ּ��� ���� �����մϴ�.
void update_value(int* value)
{
    *value += 5; // ���޹��� �����Ͱ� ����Ű�� �ּҿ� ����� ���� 5 ������ŵ�ϴ�.
}

int main(void)
{
    int number = 20; // 'number' ������ �����ϰ� �ʱ� ������ 20�� �Ҵ��մϴ�.

    printf("update_value �Լ� ȣ�� ��: %d\n", number); // 'number'�� �ʱ� �� ���

    update_value(&number); // 'update_value' �Լ��� ȣ���ϸ鼭 'number'�� �ּҸ� ���ڷ� �����մϴ�.
    // �̷��� �ϸ� �Լ� ������ ���� 'number'�� ���� ������ �� �ֽ��ϴ�.

    printf("update_value �Լ� ȣ�� ��: %d\n", number); // ����� 'number' �� ���

    return 0; 
}
