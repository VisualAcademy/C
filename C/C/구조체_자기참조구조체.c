/*
    �ڱ� ���� ����ü: ����ü ������� �ڱ� �ڽ��� ����ü ���� ����
    �׸��� �׷�����...
*/
#include <stdio.h>

typedef struct ArrayList
{
    char name[25];
    struct ArrayList* next; // �ڱ� ���� ������
} ArrayList;

int main(void)
{
    ArrayList* p; // ����ü ������ ����
    ArrayList list1 = { "ȫ�浿" };
    ArrayList list2 = { "��λ�" };
    ArrayList list3 = { "�Ѷ��" };

    list1.next = &list2; // 1~2 ����ü ����
    list2.next = &list3; // 2~3 ����ü ����
    list3.next = NULL;   // ����ü ����(\0)

    p = &list1; // ù��° ����Ʈ���� ���
    while (p != NULL) { // �����Ͱ� ���� �ƴ� ����
        printf("%s\n", p->name);
        p = p->next; // ������ ���� ��� �� ���� ������ ����
    }

    return 0;
}
