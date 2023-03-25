/*
    자기 참조 구조체: 구조체 멤버에서 자기 자신의 구조체 형을 선언
    그림을 그려보자...
*/
#include <stdio.h>

typedef struct ArrayList
{
    char name[25];
    struct ArrayList* next; // 자기 참조 포인터
} ArrayList;

int main(void)
{
    ArrayList* p; // 구조체 포인터 변수
    ArrayList list1 = { "홍길동" };
    ArrayList list2 = { "백두산" };
    ArrayList list3 = { "한라산" };

    list1.next = &list2; // 1~2 구조체 연결
    list2.next = &list3; // 2~3 구조체 연결
    list3.next = NULL;   // 구조체 종결(\0)

    p = &list1; // 첫번째 리스트부터 출력
    while (p != NULL) { // 포인터가 널이 아닐 동안
        printf("%s\n", p->name);
        p = p->next; // 포인터 내용 출력 후 다음 포인터 지정
    }

    return 0;
}
