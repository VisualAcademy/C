/*
	이진 탐색 트리(Tree) : 배열 사용
*/
#include <stdio.h>
#include <string.h>

#define nil -1	//아무것도 가리키지 않는 포인터
#define MaxSize 100

struct Node
{
	int PrevNode;		//왼쪽 부분 트리를 가리키는 포인터
	char Name[25];	//이름 저장
	int NextNode;		//오른쪽 부분 트리를 가리키는 포인터
};

int sp = 6; // 새로운 노드를 저장할 위치

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

	printf("입력할 내용 : ");
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
			current = tree[current].NextNode;	//오른쪽 부분 트리로 이동
		}
	}

	// 새로운 데이터 연결
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
찾을 내용(aa~zz) : aa
찾았습니다.
Press any key to continue
*/