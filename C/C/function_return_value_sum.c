#include <stdio.h>

void hi(void) {
    printf("�ȳ�\n");
}

void hello(char message[]) {
    printf("%s\n", message);
}

int sum(int num1, int num2) {
    return num1 + num2;
}

int main(void) {
    int result;

    // [1] �Ű������� ���� ��ȯ���� ���� ���
    hi();
    hi();

    // [2] �Ű������� �ְ� ��ȯ���� ���� ���
    hello("�ȳ��ϼ���.");
    hello("�ݰ����ϴ�.");

    // [3] �Ű������� �ְ� ��ȯ���� �ִ� ���
    result = sum(5, 5);
    printf("%d\n", result);

    return 0;
}
