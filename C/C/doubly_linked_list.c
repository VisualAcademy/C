/*
	���� ���� ����Ʈ(Doubly Linked List) :
	���� ����Ʈ�� ������ ��ȸ�� �� �� ���� ������ �ִ�.
	�̸� ������ ������ ������ ���� ���� ����Ʈ�̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
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

	//������ ����Ʈ ����
	tail = NULL;

	current = GetNode();
	strcpy(current->Name, "aa");
	strcpy(current->Phone, "11");

	current->PrevNode = tail;
	tail = current;

	current = GetNode();
	strcpy(current->Name, "bb");
	strcpy(current->Phone, "22");

	current->PrevNode = tail;
	tail = current;

	current = GetNode();
	strcpy(current->Name, "cc");
	strcpy(current->Phone, "33");

	current->PrevNode = tail;
	tail = current;

	// ������ ����Ʈ ����
	current = tail;
	head = NULL;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	current->NextNode = head;
	head = current;
	current = current->PrevNode;

	// ������ ����Ʈ ���
	current = head;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->NextNode;

	// ������ ����Ʈ ���
	current = tail;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;

	printf("%s %s\n", current->Name, current->Phone);
	current = current->PrevNode;

	// �޸� ����
	while (head != NULL)
	{
		current = head;
		head = head->NextNode;
		free(current);
	}
}

// ����ü ũ�⸸ŭ �޸� �Ҵ�
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}
