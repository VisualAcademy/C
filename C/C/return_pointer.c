#include <stdio.h>
#include <stdlib.h>

// ������ �޾� ������ ��ȯ
int* return_pointer_to_int(int num)
{
    // ���� ũ�� �޸� ���� �Ҵ�
    int* ptr = (int*)malloc(sizeof(int));

    // ptr�� ����Ű�� ���� num �� ����
    *ptr = num;

    // num�� ����� �ּ� ��ȯ
    return ptr;
}

int main(void)
{
    int num = 10;

    // �Լ� ȣ��, ��ȯ�� ������ ptr�� ����
    int* ptr = return_pointer_to_int(num);

    // ptr�� ����Ű�� �� ���
    printf("�����Ͱ� ����Ű�� ��: %d\n", *ptr);

    // ���� �Ҵ� �޸� ����
    free(ptr);

    return 0;
}
