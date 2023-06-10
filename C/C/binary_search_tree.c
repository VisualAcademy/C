#include <stdio.h>
#include <stdlib.h>

// ���� Ž�� Ʈ���� ��带 �����ϴ� ����ü
struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
};

// ���ο� ��带 �����ϴ� �Լ�
struct Node* newNode(int item)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL; // �� ����� ����, ������ �ڽ��� NULL�� �ʱ�ȭ
    return temp;
}

// ���� Ž�� Ʈ���� ���ο� ��带 �����ϴ� �Լ�
struct Node* insert(struct Node* node, int key)
{
    if (node == NULL) // ������ ��ġ�� ã���� �� �� ��� ����
    {
        return newNode(key);
    }

    if (key < node->key) // �����Ϸ��� Ű�� ���� ����� Ű���� ������ �������� �̵�
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key) // �����Ϸ��� Ű�� ���� ����� Ű���� ũ�� ���������� �̵�
    {
        node->right = insert(node->right, key);
    }

    return node;
}

// ���� Ž�� Ʈ������ Ư�� Ű�� ���� ��带 �˻��ϴ� �Լ�
struct Node* search(struct Node* root, int key)
{
    if (root == NULL || root->key == key) // �˻� ����� ���ų�, ã�� ��带 �߰����� ��
    {
        return root;
    }

    if (root->key < key) // �˻��Ϸ��� Ű�� ���� ����� Ű���� ũ�� ���������� �̵�
    {
        return search(root->right, key);
    }

    return search(root->left, key); // �� ���� ��� �������� �̵�
}

int main()
{
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int search_key = 40;
    if (search(root, search_key) != NULL)
    {
        printf("%d Ű�� ���� ��尡 ���� Ž�� Ʈ���� �����մϴ�.\n", search_key);
    }
    else
    {
        printf("%d Ű�� ���� ���� ���� Ž�� Ʈ���� �������� �ʽ��ϴ�.\n", search_key);
    }

    return 0;
}
