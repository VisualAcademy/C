#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// �ؽ� ���̺� ������ ������ ������ ����ü ����
struct DataItem
{
    int key;
    int data;
};

struct DataItem* hashArray[TABLE_SIZE]; // �ؽ� ���̺�
struct DataItem* dummyItem; // ���� ������

// Ű�� �޾Ƽ� �ش� Ű�� �ؽ� �ڵ带 ����ϴ� �Լ�
int hashCode(int key)
{
    return key % TABLE_SIZE;
}

// Ű�� �����͸� �޾Ƽ�, ���ο� ������ �������� �����ϰ� �̸� �ؽ� ���̺� �����ϴ� �Լ�
void insert(int key, int data)
{
    struct DataItem* item = (struct DataItem*)malloc(sizeof(struct DataItem));
    item->key = key;
    item->data = data;

    // �ؽ� �ڵ带 ����ؼ�, ������ �������� ���Ե� ��ġ�� ����
    int hashIndex = hashCode(key);

    // �̹� �ش� ��ġ�� ������ �������� �ִٸ�, ���� ��ġ�� ã�´�.
    while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
    {
        hashIndex = hashCode(hashIndex + 1);
    }

    hashArray[hashIndex] = item; // ������ ������ ����
}

// Ű�� �޾Ƽ�, �ش� Ű�� ���� ������ �������� �ؽ� ���̺��� �˻��ϴ� �Լ�
struct DataItem* search(int key)
{
    // �ؽ� �ڵ带 ����ؼ�, ������ �������� ��ġ�� �ε����� ã�´�.
    int hashIndex = hashCode(key);

    // �� ��ġ�������� ������ �������� ã�´�.
    while (hashArray[hashIndex] != NULL)
    {
        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex]; // ������ �������� ã�Ҵٸ� ��ȯ

        hashIndex = hashCode(hashIndex + 1);
    }

    return NULL; // ������ �������� ã�� ���ߴٸ� NULL ��ȯ
}

// �ؽ� ���̺��� ������ ����ϴ� �Լ�
void display()
{
    int i = 0;

    for (i = 0; i < TABLE_SIZE; i++)
    {
        if (hashArray[i] != NULL)
            printf("(%d,%d) ", hashArray[i]->key, hashArray[i]->data);
        else
            printf("NULL ");
    }

    printf("\n");
}

int main(void)
{
    // ���� �ڵ�
    insert(1, 20);
    insert(2, 70);
    insert(42, 80);
    insert(4, 25);
    insert(12, 44);
    insert(14, 32);
    insert(17, 11);
    insert(13, 78);
    insert(37, 97);

    display();

    struct DataItem* item = search(37);
    if (item != NULL)
    {
        printf("���Ҹ� ã�ҽ��ϴ�: %d\n", item->data);
    }
    else
    {
        printf("���Ҹ� ã�� ���߽��ϴ�\n");
    }

    return 0;
}
