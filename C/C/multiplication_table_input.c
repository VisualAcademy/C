#include <stdio.h>
int main() {
    int num, i;
    printf("구구단을 출력할 숫자를 입력하세요: ");
    scanf("%d", &num);
    for (i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
