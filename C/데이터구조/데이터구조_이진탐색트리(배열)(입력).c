/*
	���� Ž�� Ʈ��(Tree) : �迭 ���
*/
#include <stdio.h>
#include <string.h>

#define nil -1	//�ƹ��͵� ����Ű�� �ʴ� ������
#define MaxSize 100

struct Node
{
	int PrevNode;		//���� �κ� Ʈ���� ����Ű�� ������
	char Name[25];	//�̸� ����
	int NextNode;		//������ �κ� Ʈ���� ����Ű�� ������
};

int sp = 6; // ���ο� ��带 ������ ��ġ

int main(void)
{
	struct Node tree[MaxSize] =
	{
		{1, "mm", 2},
		{3, "cc", 4},
		{5, "rr", nil},
		{nil, "aa", nil},
		{6, "ee", 7},
		{nil, "nn", nil},
	};

	char key[20];
	int current;
	int old;
	int i;

	printf("�Է��� ���� : ");
	scanf("%s", key);
	current = 0;
	while (current != nil)
	{
		old = current;
		if (strcmp(key, tree[current].Name) <= 0)
		{
			current = tree[current].PrevNode;
		}
		else
		{
			current = tree[current].NextNode;	//������ �κ� Ʈ���� �̵�
		}
	}

	// ���ο� ������ ����
	tree[sp].PrevNode = tree[sp].NextNode = nil;
	strcpy(tree[sp].Name, key);
	if (strcmp(key, tree[old].Name) <= 0)
		tree[old].PrevNode = sp;
	else
		tree[old].NextNode = sp;

	sp++;

	for (i = 0; i < sp; i++)
	{
		printf("%4d", tree[i].PrevNode);
	}
}
/*
ã�� ����(aa~zz) : aa
ã�ҽ��ϴ�.
Press any key to continue
*/