#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("���丮���� ����� ������ �Է��ϼ���: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %d\n", n, fact);
    return 0;
}
