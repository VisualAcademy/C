#include <stdio.h>
#include <stdlib.h>

// 이진 탐색 트리의 노드를 정의하는 구조체
struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
};

// 새로운 노드를 생성하는 함수
struct Node* newNode(int item)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL; // 새 노드의 왼쪽, 오른쪽 자식을 NULL로 초기화
    return temp;
}

// 이진 탐색 트리에 새로운 노드를 삽입하는 함수
struct Node* insert(struct Node* node, int key)
{
    if (node == NULL) // 삽입할 위치를 찾았을 때 새 노드 생성
    {
        return newNode(key);
    }

    if (key < node->key) // 삽입하려는 키가 현재 노드의 키보다 작으면 왼쪽으로 이동
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key) // 삽입하려는 키가 현재 노드의 키보다 크면 오른쪽으로 이동
    {
        node->right = insert(node->right, key);
    }

    return node;
}

// 이진 탐색 트리에서 특정 키를 가진 노드를 검색하는 함수
struct Node* search(struct Node* root, int key)
{
    if (root == NULL || root->key == key) // 검색 대상이 없거나, 찾는 노드를 발견했을 때
    {
        return root;
    }

    if (root->key < key) // 검색하려는 키가 현재 노드의 키보다 크면 오른쪽으로 이동
    {
        return search(root->right, key);
    }

    return search(root->left, key); // 그 외의 경우 왼쪽으로 이동
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
        printf("%d 키를 가진 노드가 이진 탐색 트리에 존재합니다.\n", search_key);
    }
    else
    {
        printf("%d 키를 가진 노드는 이진 탐색 트리에 존재하지 않습니다.\n", search_key);
    }

    return 0;
}
