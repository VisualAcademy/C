#include <stdio.h>
#include <stdlib.h>

/** @brief ��ũ�� ����Ʈ�� ��带 ǥ���ϴ� ����ü.
 *
 *  �� ���� ������ �����Ϳ� ���� ��带 ����Ű�� �����͸� ������.
 */
struct Node
{
    int data;
    struct Node* next;
};

/** @brief �־��� �����ͷ� �� ��带 �����Ѵ�.
 *
 *  �� �Լ��� �� Node�� ���� �޸𸮸� �Ҵ��ϰ� �־��� �����͸� �Ҵ��Ѵ�.
 *
 *  @param data ��忡 ����� ������.
 *  @return ���� ������ ����� ������.
 */
struct Node* create_new_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // �޸� �Ҵ� Ȯ��
    if (new_node == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }

    new_node->data = data;   // ������ �Ҵ�
    new_node->next = NULL;   // ���� ��带 NULL�� ����
    return new_node;
}

/** @brief ��ũ�� ����Ʈ�� ��� ��带 ��ȸ�ϸ� �����͸� ����Ѵ�.
 *
 *  �� �Լ��� �Ű������� ����� �����͸� �޾�,
 *  �� ������ ����Ʈ�� ������ �� ����� �����͸� ����Ѵ�.
 *
 *  @param n �����͸� ����� ����Ʈ�� ù ���.
 */
void print_list(struct Node* n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
    printf("\n");
}

/** @brief ���α׷��� �������� main �Լ�.
 *
 *  �� �Լ������� �� ���� ��带 �����ϰ� �̸� �����Ͽ� ��ũ�� ����Ʈ�� �����.
 *  �� ��, print_list �Լ��� ����Ͽ� ����Ʈ�� ������ ����Ѵ�.
 */
int main(void)
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // ��� ����
    head = create_new_node(1);
    second = create_new_node(2);
    third = create_new_node(3);

    // ��� ����
    head->next = second;
    second->next = third;

    // ����Ʈ ���
    print_list(head);

    // �޸� ����
    free(third);
    free(second);
    free(head);

    return 0;
}
