#include <stdio.h>
#include <string.h>
#define TableSize 1000  // �ؽ����̺��� ũ�� : 1000���� �迭
#define ModSize 1000    // 1000���� ������, 0~999������ ���������� �ε����� ��
//[!] �ؽ� �˰����� ����Ͽ� �ؽ� ������ ����� : A~Z�������� ����
// AA~ZZZ���� �����빮�ڸ� ���޽� : 0~999��° �ε����� ��ȯ
int Hashtable(char* s) {
    int n;
    n = strlen(s);
    return (s[0] - 'A' + (s[n / 2 - 1] - 'A') * 26 + (s[n - 2] - 'A') * 26 * 26) % ModSize;
}
struct Member {
    char Name[25];  // �̸�
    char Tel[15];   // ��ȭ
}mem[TableSize];    // 1000���� �ؽ����̺�
void main(void) {
    int i = 0; int index = 0;
    char name[25]; char tel[15];
    // 3���� ���ڵ带 ����ڷκ��� �ޱ�
    printf("�̸��� ��ȭ��ȣ : \n");
    // 3���� ���ڵ� ����
    for (i = 0; i < 3; i++) {
        scanf("%s %s", name, tel);
        index = Hashtable(name); // ���ڿ��� �ش��ϴ� �ε��� �ޱ�
        strcpy(mem[index].Name, name); // �����δ� �������ε����� ���� 
        strcpy(mem[index].Tel, tel);
    }
    // �˻�
    printf("�˻� :\n");
    for (i = 0; i < 3; i++) {
        printf("�̸� : "); scanf("%s", name);
        index = Hashtable(name);
        if (strlen(mem[index].Name) < 2) {
            printf("�ش� �̸��� �����ϴ�.");
        }
        else {
            printf("�̸� : %s, ��ȭ : %s\n", mem[index].Name, mem[index].Tel);
        }
    }
    // AA = 0, BB = 703, NN = 139, ... => 0~999
    // NN�� NNB�� ������ �ε����� �ٶ󺻴�. �浹
    //int r = Hashtable("NNB"); printf("%d\n", r); 
}