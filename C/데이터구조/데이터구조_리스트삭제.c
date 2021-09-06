/*
	����Ʈ���� �����͸� �����ϴ� ���α׷�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

// ���Ḯ��Ʈ ������ ����ü
struct Node
{
	char Name[20];		//�̸�
	char Phone[20];		//��ȭ��ȣ
	struct Node* NextNode;	//���� ��带 ����Ű�� ������
}*head;

// �Լ� ����
struct Node* GetNode(void);
void Add(void);
void Print(void);
void Delete(char*);

// ���� �Լ�
int main(void)
{
	char key[32];

	Add(); // 2���� ��� ����
	Print(); // 2���� ��� ���

	printf("������ ������ : ");
	scanf("%s", key);
	Delete(key);
	printf("\n");
	Print();
}

void Add(void)
{
	int i = 0;
	struct Node* current;

	printf("����Ʈ�� ������ �߰� : \n");
	head = NULL;
	for (i = 0; i < 2; i++)
	{
		current = GetNode();
		scanf("%s %s", current->Name, current->Phone);
		current->NextNode = head;
		head = current;
	}
}

void Print(void)
{
	struct Node* current;

	printf("����Ʈ���� ������ ��� : \n");
	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

void Delete(char* key)
{
	struct Node* current, * old;

	current = old = head;
	while (current != NULL)
	{
		if (strcmp(key, current->Name) == 0)
		{
			if (current == head)
			{
				head = current->NextNode;
			}
			else
			{
				old->NextNode = current->NextNode;
			}
			return;
		}
		old = current;
		current = current->NextNode;
	}
	printf("Ű �����͸� ã�� �� �����ϴ�.\n");
}

struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}

/*
����Ʈ�� ������ �߰� :
aaa 111
bbb 222
����Ʈ���� ������ ��� :
bbb 222
aaa 111
������ ������ : aaa

����Ʈ���� ������ ��� :
bbb 222
Press any key to continue
*/