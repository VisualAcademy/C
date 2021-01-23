/*
	����Ʈ�� ������ �Է��ϱ�
*/
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// ���Ḯ��Ʈ ������ ����ü
struct Node
{
	char Name[20];		//�̸�
	char Phone[20];		//��ȭ��ȣ
	struct Node* NextNode;	//���� ��Ʈ�� ����Ű�� ������
}*head;

// �Լ� ����
struct Node* GetNode(void);
void Add(void);
void Print(void);
void Insert(char*);

// ���� �Լ�
void main(void)
{
	char key[32];

	Add();
	Print();

	//����Ʈ�� ������ �߰�
	printf("��� ������ �ڿ� �߰��Ұ����� ? ");
	scanf("%s", key);
	Insert(key);
	printf("\n");
	Print();
}

//����Ʈ 2�� ����
void Add(void)
{
	int i = 0;
	struct Node* current;

	printf("������ 2�� �Է� : (�̸�) (��ȭ��ȣ)\n");
	head = NULL;
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->NextNode = head;
		head = current;
	}
}

//����Ʈ 2�� ��� �Լ�
void Print(void)
{
	struct Node* current;

	printf("������ ��� : (�̸�) (��ȭ��ȣ)\n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

//����Ʈ�� Ư�� �̸� �ڿ� ������ �߰�
void Insert(char* key)
{
	struct Node* current, * n;

	n = GetNode();
	printf("�߰��� ������ : ");
	scanf("%s %s", n->Name, n->Phone);

	current = head;
	while (current != NULL)
	{
		if (strcmp(key, current->Name) == 0)
		{
			n->NextNode = current->NextNode;
			current->NextNode = n;
			return;
		}
		current = current->NextNode;
	}
	printf("�ش�Ǵ� �����Ͱ� �����ϴ�.\n");
}

//����ü ũ�⸸ŭ �޸� �Ҵ��ϴ� �Լ�
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}
/*
������ 2�� �Է� : (�̸�) (��ȭ��ȣ)
aaa 111
bbb 222
������ ��� : (�̸�) (��ȭ��ȣ)
bbb 222
aaa 111
��� ������ �ڿ� �߰��Ұ����� ? aaa
�߰��� ������ : ccc 333

������ ��� : (�̸�) (��ȭ��ȣ)
bbb 222
aaa 111
ccc 333
Press any key to continue
*/