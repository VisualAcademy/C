#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool is_even(int num) {
    return num % 2 == 0;
}

int main(void) {
    int num = 0;
    char* s = "ȫ�浿";

    printf("���ڸ� �ϳ� �Է�: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("¦���Դϴ�.\n");
    }
    else {
        printf("Ȧ���Դϴ�.\n");
    }

    printf("%s\n", s);
    return 0;
}
