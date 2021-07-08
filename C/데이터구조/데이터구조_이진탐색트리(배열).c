/*
	���� Ž�� Ʈ��(Tree) : �迭 ���
*/
#include <stdio.h>
#include <string.h>

#define nil -1	//�ƹ��͵� ����Ű�� �ʴ� ������
#define MaxSize 10

struct Node
{
	int PrevNode;		//���� �κ� Ʈ���� ����Ű�� ������
	char Name[25];	//�̸� ����
	int NextNode;		//������ �κ� Ʈ���� ����Ű�� ������
};

void main(void)
{
	struct Node tree[MaxSize] =
	{
		{1, "mm", 2},       //0
		{3, "cc", 4},       //1
		{5, "rr", nil},     //2
		{nil, "aa", nil},   //3
		{6, "ee", 7},       //4
		{nil, "nn", nil},   //5
		{nil, "dd", nil},   //6
		{nil, "ll", nil}    //7
	};

	char key[20];
	int current;

	printf("ã�� ����(aa~zz) : ");
	scanf("%s", key);
	current = 0;
	while (current != nil)
	{
		if (strcmp(key, tree[current].Name) == 0)
		{
			printf("ã�ҽ��ϴ�.\n");
			break;
		}
		else if (strcmp(key, tree[current].Name) < 0)
		{
			current = tree[current].PrevNode;	//���� �κ� Ʈ���� �̵�
		}
		else
		{
			current = tree[current].NextNode;	//������ �κ� Ʈ���� �̵�
		}
	}
}
/*
ã�� ����(aa~zz) : aa
ã�ҽ��ϴ�.
Press any key to continue
*/