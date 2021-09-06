/*
	�����ͱ��� : ����Ʈ(List) : FIFO�� ����Ʈ
*/
#include <stdio.h>
#include <malloc.h>

// ���� ��ũ�� ����Ʈ�� ����ü
struct Node
{
	char Name[20];			//�̸�
	char Phone[20];			//��ȭ��ȣ
	struct Node* NextNode;	//��� : ���� ��带 ����Ű�� ������
};

struct Node* GetNode(void);

// ���� �Լ�
int main(void)
{
	int i = 0;
	struct Node* head, * current, * old;

	printf("������ �Է� : \n");
	head = GetNode();
	scanf("%s %s", head->Name, head->Phone); //�̸� ������ �Է�

	old = head;//old������ : ���� ��带 ����Ű�� ������
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		old->NextNode = current;
		old = current;
	}
	old->NextNode = NULL; // ������ �����Ϳ� NULL�� ����Ʈ ����

	printf("������ ��� : \n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s \n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

// �޸� �Ҵ� �Լ�
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}