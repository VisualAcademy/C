/*
	����Ʈ(List) : �迭�� ���ؼ� �������� �Է°� ������ ������ ������ ����
	(�Է��� ������ �ݴ�� ������ ����Ʈ �ۼ�)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

// ���� ��ũ�� ����Ʈ�� ����ü
struct Node
{
	char Name[20];			//�̸�
	char Phone[20];			//��ȭ��ȣ
	struct Node* NextNode;	//���� ��带 ����Ű�� ������
};

struct Node* GetNode(void);

// ���� �Լ�
void main(void)
{
	register int i = 0;	// �ݺ���
	struct Node* head; // ù ��° ���
	struct Node* current; // ���Ӱ� �߰��Ǵ� ���� ���

	printf("�������Է� : \n");

	head = NULL; // ù��° �������� ��ũ�� �η� �ʱ�ȭ
	for (i = 0; i < 3; i++)
	{
		current = GetNode(); // �� ��� ����
		scanf("%s %s", current->Name, current->Phone); // �� ����
		current->NextNode = head; // �� ����� �����Ϳ� ù��° ��� ����
		head = current; // ����� ��忡 ���� �� ����
	}

	printf("��������� : \n");

	current = head;
	while (current != NULL)
	{
		printf("%s %s\n", current->Name, current->Phone);
		current = current->NextNode;
	}
}

// �޸� �Ҵ� �Լ�
struct Node* GetNode(void)
{
	return (struct Node*)malloc(sizeof(struct Node));
}

/*
�������Է� :
aaa 111
bbb 222
ccc 333
��������� :
ccc 333
bbb 222
aaa 111
Press any key to continue
*/
