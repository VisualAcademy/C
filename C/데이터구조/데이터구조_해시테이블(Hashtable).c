/*
�ؽ����̺�(Hashtable) :
    �迭�� �ε������� ������� �ʰ�,
    ���ڿ��� Ű���� ����Ͽ� ������ �Է°� ����� �� �� �ִ� ����
*/
#include <stdio.h>
#include <string.h>

#define TableSize 1000
#define ModSize 1000

int Hashtable(char*);

// ������ �̸��� ��ȭ��ȣ�� �����ϴ� ����ü
struct PhoneAddress
{
    char Name[25];	// �̸� �ʵ�
    char Phone[15];	// ��ȭ��ȣ �ʵ�
}mobile[TableSize];

void main(void)
{
    int n;
    int i = 0;
    char name[25], phone[15];

    printf("�̸�(�����빮��) ��ȭ��ȣ\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s %s", name, phone);
        n = Hashtable(name); // �ؽ����̺�κ��� �ε��� �޾ƿ���
        strcpy(mobile[n].Name, name);
        strcpy(mobile[n].Phone, phone);
    }

    //rewind(stdin);
    printf("�˻��� �����͸� �Է��ϼ���.\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", name);
        n = Hashtable(name); // �ؽ����̺�κ��� �ε��� �޾ƿ���
        printf("%25s %15s\n", mobile[n].Name, mobile[n].Phone);
    }
}

// �ؽ� �˰����� ����Ͽ� �ؽ� ������ �����
int Hashtable(char* s)
{
    int n;

    n = strlen(s);
    return
        (s[0] - 'A' + (s[n / 2 - 1] - 'A') * 26 + (s[n - 2] - 'A') * 26 * 26)
        % ModSize;
}

/*
�̸� ��ȭ��ȣ
NN 111
BB 222
CC 333
�˻��� �����͸� �Է��ϼ���.
BB
                       BB             222
CC
                       CC             333
NN
                       NN             111
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/
