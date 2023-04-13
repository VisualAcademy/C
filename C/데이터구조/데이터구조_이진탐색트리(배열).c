#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NIL -1	//�ƹ��͵� ����Ű�� �ʴ� ������
#define MAX_SIZE 10

struct Node {
    int prev_node;		//���� �κ� Ʈ���� ����Ű�� ������
    char name[25];	//�̸� ����
    int next_node;		//������ �κ� Ʈ���� ����Ű�� ������
};

int main(void) {
    struct Node tree[MAX_SIZE] = {
      {1, "mm", 2},       //0
      {3, "cc", 4},       //1
      {5, "rr", NIL},     //2
      {NIL, "aa", NIL},   //3
      {6, "ee", 7},       //4
      {NIL, "nn", NIL},   //5
      {NIL, "dd", NIL},   //6
      {NIL, "ll", NIL}    //7
    };

    char key[20];
    int current;

    printf("ã�� ����(aa~zz) : ");
    scanf("%s", key);
    current = 0;
    while (current != NIL) {
        if (strcmp(key, tree[current].name) == 0) {
            printf("ã�ҽ��ϴ�.\n");
            break;
        }
        else if (strcmp(key, tree[current].name) < 0) {
            current = tree[current].prev_node;	//���� �κ� Ʈ���� �̵�
        }
        else {
            current = tree[current].next_node;	//������ �κ� Ʈ���� �̵�
        }
    }

    return 0;
}
/*
ã�� ����(aa~zz) : aa
ã�ҽ��ϴ�.
*/
