/*
	이진 탐색 트리(Tree) : 배열 사용
*/
#include <stdio.h>
#include <string.h>

#define nil -1	//아무것도 가리키지 않는 포인터
#define MaxSize 10

struct Node
{
	int PrevNode;		//왼쪽 부분 트리를 가리키는 포인터
	char Name[25];	//이름 저장
	int NextNode;		//오른쪽 부분 트리를 가리키는 포인터
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

	printf("찾을 내용(aa~zz) : ");
	scanf("%s", key);
	current = 0;
	while (current != nil)
	{
		if (strcmp(key, tree[current].Name) == 0)
		{
			printf("찾았습니다.\n");
			break;
		}
		else if (strcmp(key, tree[current].Name) < 0)
		{
			current = tree[current].PrevNode;	//왼쪽 부분 트리로 이동
		}
		else
		{
			current = tree[current].NextNode;	//오른쪽 부분 트리로 이동
		}
	}
}
/*
찾을 내용(aa~zz) : aa
찾았습니다.
Press any key to continue
*/