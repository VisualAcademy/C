#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("자연수를 입력하세요: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1부터 %d까지의 합: %d\n", n, sum);
    return 0;
}
