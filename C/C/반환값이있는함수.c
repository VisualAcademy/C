#include <stdio.h>

void Hi(void) {
    printf("�ȳ�\n");
}

void Hello(char c[]) {
    printf("%s\n", c);
}

int Hap(int a, int b) {
    return (a + b);
}

int main(void) {
    int i;

    //[1] �Ű������� ���� ��ȯ���� ���� ���
    Hi(); Hi();

    //[2] �Ű������� �ְ� ��ȯ���� ���� ���
    Hello("�ȳ��ϼ���."); Hello("�ݰ����ϴ�.");

    //[3] �Ű������� �ְ� ��ȯ���� �ִ� ���
    i = Hap(5, 5);
    printf("%d\n", i);

    return 0;
}
