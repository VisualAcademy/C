#include <stdio.h>

void Hi(void) {
    printf("안녕\n");
}

void Hello(char c[]) {
    printf("%s\n", c);
}

int Hap(int a, int b) {
    return (a + b);
}

int main(void) {
    int i;

    //[1] 매개변수도 없고 반환값도 없는 경우
    Hi(); Hi();

    //[2] 매개변수는 있고 반환값이 없는 경우
    Hello("안녕하세요."); Hello("반갑습니다.");

    //[3] 매개변수도 있고 반환값도 있는 경우
    i = Hap(5, 5);
    printf("%d\n", i);

    return 0;
}
