#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("�ڿ����� �Է��ϼ���: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1���� %d������ ��: %d\n", n, sum);
    return 0;
}
