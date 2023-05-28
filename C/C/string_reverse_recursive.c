#include <stdio.h>
#include <string.h>

// ��͸� ����Ͽ� ���ڿ��� ������ �Լ�
void reverse_string(int start, int end, char str[]) {
    // start�� end �̻��̸� ��͸� ����
    if (start >= end) {
        return;
    }

    // ���ڿ��� start ��ġ�� end ��ġ�� �ִ� ���ڸ� ��ȯ
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // ��� ȣ���� ���� ���ڿ��� ���� ��ġ�� ������
    reverse_string(start + 1, end - 1, str);
}

int main(void) {
    char str[] = "Hello, world!";
    int len = strlen(str);

    // ������ ���ڿ� ���
    printf("���� ���ڿ�: %s\n", str);

    // ���ڿ� ������
    reverse_string(0, len - 1, str);

    // �������� ���ڿ� ���
    printf("������ ���ڿ�: %s\n", str);

    return 0;
}
