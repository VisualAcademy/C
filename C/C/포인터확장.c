#include <stdio.h>

int main(void) {
    int i = 0, j = 0;
    char* name = "홍길동"; // 포인터 변수를 선언하고 문자열을 저장
    char* names[] = { "안녕하세요", "반가워", "또만나요" }; // 포인터의 배열을 선언하고 초기화
    char(*addr)[5]; // 배열의 포인터를 선언
    char ad[3][5] = { "abcd", "efgh", "ijkl" }; // 2차원 배열을 선언하고 초기화
    char** nickname = &name; // 포인터의 포인터를 선언하고 초기화
    addr = ad; // 배열의 포인터에 2차원 배열을 대입

    printf("[0] %s\n", name); // 문자열을 출력
    for (i = 0; i < 3; i++) {
        printf("[1] %s\t", names[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c", addr[i][j]); // 2차원 배열을 참조하는 배열의 포인터를 이용하여 출력
        }
        printf("\n");
    }
    printf("\n");
    printf("[3] %s\n", *nickname); // 포인터의 포인터를 이용하여 문자열을 출력

    return 0;
}
