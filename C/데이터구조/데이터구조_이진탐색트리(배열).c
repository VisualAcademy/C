#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NIL -1	//아무것도 가리키지 않는 포인터
#define MAX_SIZE 10

struct Node {
    int prev_node;		//왼쪽 부분 트리를 가리키는 포인터
    char name[25];	//이름 저장
    int next_node;		//오른쪽 부분 트리를 가리키는 포인터
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

    printf("찾을 내용(aa~zz) : ");
    scanf("%s", key);
    current = 0;
    while (current != NIL) {
        if (strcmp(key, tree[current].name) == 0) {
            printf("찾았습니다.\n");
            break;
        }
        else if (strcmp(key, tree[current].name) < 0) {
            current = tree[current].prev_node;	//왼쪽 부분 트리로 이동
        }
        else {
            current = tree[current].next_node;	//오른쪽 부분 트리로 이동
        }
    }

    return 0;
}
/*
찾을 내용(aa~zz) : aa
찾았습니다.
*/
