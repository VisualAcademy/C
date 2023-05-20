#include <stdio.h>
#include <stdlib.h>

// ��� ������ �����մϴ�.
struct Node
{
    int data;  // ��尡 ������ ������
    struct Node* next;  // ���� ��带 ����Ű�� ������(�ڱ� ���� ����ü)
};

int main(void)
{
    // ��ũ�� ����Ʈ�� head�� �����ϰ� �ʱ�ȭ�մϴ�.
    struct Node* head = NULL;

    // head ��忡 ���� �޸𸮸� �������� �Ҵ��մϴ�.
    head = (struct Node*)malloc(sizeof(struct Node));

    // �Ҵ�� �޸� ������ ������ �������� Ȯ���մϴ�.
    if (head == NULL)
    {
        printf("head ��� �޸� �Ҵ� ����.\n");
        return -1;
    }

    // head ����� �����͸� �����ϰ�, ���� ��带 ����Ű�� �����͸� NULL�� �����մϴ�.
    head->data = 1;
    head->next = NULL;

    // head ����� �����͸� ����մϴ�.
    printf("head ����� ������: %d\n", head->data);

    // �޸� ����
    free(head);

    return 0;
}
