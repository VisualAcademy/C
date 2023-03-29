#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool is_even(int num) {
    return num % 2 == 0;
}

int main(void) {
    int num = 0;
    char* s = "홍길동";

    printf("숫자를 하나 입력: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("짝수입니다.\n");
    }
    else {
        printf("홀수입니다.\n");
    }

    printf("%s\n", s);
    return 0;
}
