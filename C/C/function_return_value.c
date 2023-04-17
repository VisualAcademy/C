#include <stdio.h>

void hi(void) {
    printf("안녕\n");
}

void hello(char message[]) {
    printf("%s\n", message);
}

int sum(int num1, int num2) {
    return num1 + num2;
}

int main(void) {
    int result;

    // [1] 매개변수도 없고 반환값도 없는 경우
    hi();
    hi();

    // [2] 매개변수는 있고 반환값이 없는 경우
    hello("안녕하세요.");
    hello("반갑습니다.");

    // [3] 매개변수도 있고 반환값도 있는 경우
    result = sum(5, 5);
    printf("%d\n", result);

    return 0;
}
