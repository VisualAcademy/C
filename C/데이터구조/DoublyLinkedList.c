/*
	���� ���� ����Ʈ(Doubly Linked List) :
	���� ����Ʈ�� ������ ��ȸ�� �� �� ���� ������ �ִ�.
	�̸� ������ ������ ������ ���� ���� ����Ʈ�̴�.
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// ���� ���� ��ũ�� ����Ʈ�� ����ü
struct Node
{
	struct Node* PrevNode;		//������ ������
	char Name[20];			//�̸�
	char Phone[20];			//��ȭ��ȣ
	struct Node* NextNode;	//������ ������
};

struct Node* GetNode(void);

// ���� �Լ�
int main(void)
{
	int i = 0;
	struct Node* head, * tail, * current;

	tail = NULL;	//������ ����Ʈ ����
	for (i = 0; i < 3; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->PrevNode = tail;
		tail = current;
	}

	current = tail;	//������ ����Ʈ ����
	head = NULL;
	for (i = 0; i < 3; i++)
	{
		current->NextNode = head;
		head = current;
		current = current->PrevNode;
	}

	printf("\n������ ����Ʈ\n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}

	printf("\n������ ����Ʈ\n");
	current = tail;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->PrevNode;
	}
}

// ����ü ũ�⸸ŭ �޸� �Ҵ�
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}
/*
aaa 111
bbbb 2222
ccccc 33333

������ ����Ʈ
aaa 111
bbbb 2222
ccccc 33333

������ ����Ʈ
ccccc 33333
bbbb 2222
aaa 111
Press any key to continue
*/