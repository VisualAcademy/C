#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr;

    // int ���� ������ �� �ִ� �޸𸮸� �������� �Ҵ��մϴ�.
    ptr = (int*)malloc(sizeof(int));

    // �޸� �Ҵ翡 ������ ��� ���� �޽����� ����ϰ� ���α׷��� �����մϴ�.
    if (ptr == NULL)
    {
        printf("�޸� �Ҵ翡 �����߽��ϴ�.\n");
        return 1;
    }

    // �������� �Ҵ�� �޸𸮿� 10�� �����մϴ�.
    *ptr = 10;

    // �������� �Ҵ�� �޸𸮿� ����� ���� ����մϴ�.
    printf("%d\n", *ptr);

    // �������� �Ҵ�� �޸𸮸� �����մϴ�.
    free(ptr);

    return 0;
}
