/*
    ���ǹ�(Conditional Statement)
        : ������ �� �Ǵ� ������ ���� �б�
*/
#include <stdio.h>

void main() {
    //[0]
    int i = 0;
    printf("������ �ϳ� �Է� : _\b");
    scanf("%d", &i); // ������ �Է¹޾� i������ ����
    printf("�Է��Ͻ� �ڷ� : %d\n", i);

    //[1] �ܼ� if��
    if (i % 2 == 0) {               // ���ǽ� : ¦�����,
        printf("¦���Դϴ�.\n");   // ���๮
    }
    //[2] else��
    if (i % 2 != 0) {
        printf("Ȧ���Դϴ�.\n"); // ���϶� ����
    }
    else {
        printf("¦���Դϴ�.\n"); // ������ �� ����
    }
    //[3] ���� if��
    if (i % 3 == 0)
    {
        printf("3�� ���\n");
    }
    else if (i % 5 == 0)
    {
        printf("5�� ���\n");
    }
    else if (i % 7 == 0)
    {
        printf("7�� ���\n");
    }
    else
    {
        printf("3,5,7�� ����� �ƴ� ��\n");
    }

}
