#include <stdio.h>

int main(void) {
    int i = 0, j = 0;
    char* name = "ȫ�浿"; // ������ ������ �����ϰ� ���ڿ��� ����
    char* names[] = { "�ȳ��ϼ���", "�ݰ���", "�Ǹ�����" }; // �������� �迭�� �����ϰ� �ʱ�ȭ
    char(*addr)[5]; // �迭�� �����͸� ����
    char ad[3][5] = { "abcd", "efgh", "ijkl" }; // 2���� �迭�� �����ϰ� �ʱ�ȭ
    char** nickname = &name; // �������� �����͸� �����ϰ� �ʱ�ȭ
    addr = ad; // �迭�� �����Ϳ� 2���� �迭�� ����

    printf("[0] %s\n", name); // ���ڿ��� ���
    for (i = 0; i < 3; i++) {
        printf("[1] %s\t", names[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c", addr[i][j]); // 2���� �迭�� �����ϴ� �迭�� �����͸� �̿��Ͽ� ���
        }
        printf("\n");
    }
    printf("\n");
    printf("[3] %s\n", *nickname); // �������� �����͸� �̿��Ͽ� ���ڿ��� ���

    return 0;
}
