#include <stdio.h>
#include <stdlib.h>

// ��� ������ �����մϴ�.
typedef struct Node
{
    int data;             // ����� ������ �κ�
    struct Node* next;    // ���� ��带 ����Ű�� ������
} Node;

int main(void)
{
    Node* firstNode = NULL;   // ù ��° ����� �����͸� �ʱ�ȭ�մϴ�.
    Node* secondNode = NULL;  // �� ��° ����� �����͸� �ʱ�ȭ�մϴ�.
    Node* thirdNode = NULL;   // �� ��° ����� �����͸� �ʱ�ȭ�մϴ�.

    // ù ��° ��带 �Ҵ��ϰ� �����͸� �����մϴ�.
    firstNode = (Node*)malloc(sizeof(Node));  // �޸𸮸� �������� �Ҵ��մϴ�.
    if (firstNode == NULL)
    {
        printf("ù ��° ��忡 ���� �޸� �Ҵ� ����.\n");
        return -1;
    }
    firstNode->data = 1;  // ù ��° ����� ������ ���� �����մϴ�.

    // �� ��° ��带 �Ҵ��ϰ� �����͸� �����մϴ�.
    secondNode = (Node*)malloc(sizeof(Node));  // �޸𸮸� �������� �Ҵ��մϴ�.
    if (secondNode == NULL)
    {
        printf("�� ��° ��忡 ���� �޸� �Ҵ� ����.\n");
        return -1;
    }
    secondNode->data = 2;  // �� ��° ����� ������ ���� �����մϴ�.

    // �� ��° ��带 �Ҵ��ϰ� �����͸� �����մϴ�.
    thirdNode = (Node*)malloc(sizeof(Node));  // �޸𸮸� �������� �Ҵ��մϴ�.
    if (thirdNode == NULL)
    {
        printf("�� ��° ��忡 ���� �޸� �Ҵ� ����.\n");
        return -1;
    }
    thirdNode->data = 3;  // �� ��° ����� ������ ���� �����մϴ�.

    // ��带 �����մϴ�.
    firstNode->next = secondNode;   // ù ��° ��尡 �� ��° ��带 ����Ű�� �մϴ�.
    secondNode->next = thirdNode;   // �� ��° ��尡 �� ��° ��带 ����Ű�� �մϴ�.
    thirdNode->next = NULL;         // �� ��° ��尡 �������̹Ƿ�, next�� NULL�� �����մϴ�.

    // ��ũ�� ����Ʈ�� ��带 ����մϴ�.
    Node* node = firstNode;   // ù ��° ��忡�� �����մϴ�.
    while (node != NULL)      // ��尡 NULL�� �� ������(����Ʈ�� ��) �ݺ��մϴ�.
    {
        printf("%d\n", node->data);  // ���� ����� �����͸� ����մϴ�.
        node = node->next;           // ���� ���� �̵��մϴ�.
    }

    // ��ũ�� ����Ʈ�� �޸𸮸� �����մϴ�.
    free(firstNode);   // ù ��° ����� �޸𸮸� �����մϴ�.
    free(secondNode);  // �� ��° ����� �޸𸮸� �����մϴ�.
    free(thirdNode);   // �� ��° ����� �޸𸮸� �����մϴ�.

    return 0;
}
