// �˻�(SEARCH) : �־��� ���������� �־��� ���� �˻�
// �����˻�(Sequential Search) : ��� �����͸� ������� �˻� 
#include <stdio.h>
#include <stdbool.h> // ����: bool Ÿ���� ���� stdbool.h ��� �߰�
// #define true 1 ����
// #define false 0 ����
// typedef int bool; ����

int main(void) { // ����: void main(void)���� int main(void)��
    //[1] 
    int i = 0;
    int data[] = { 1, 3, 5, 7, 9, 11 };
    int search = 0;
    int n = sizeof(data) / sizeof(data[0]);
    bool flag = false; // �� �Ǵ� ������ ��Ƴ��� �׸�
    printf("�˻��� ����(1~20) : __\b\b");
    scanf("%d", &search);
    //[2] SEARCH �˰��� : �����˻� : FULL SCAN
    for (i = 0; i < n; i++) {
        if (search == data[i]) {
            flag = true; // �� : ���� ������ �ִٸ�, 
        }
    }
    //[3]
    if (flag == true) {
        printf("%d�� ã�ҽ��ϴ�.\n", search);
    }
    else {
        printf("%d�� �� ã�ҽ��ϴ�.\n", search);
    }

    return 0; // �߰�: ���� ����� 0 ��ȯ
}
