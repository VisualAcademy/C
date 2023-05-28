#include <stdio.h>
#include <string.h>

// 재귀를 사용하여 문자열을 뒤집는 함수
void reverse_string(int start, int end, char str[]) {
    // start가 end 이상이면 재귀를 종료
    if (start >= end) {
        return;
    }

    // 문자열의 start 위치와 end 위치에 있는 문자를 교환
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // 재귀 호출을 통해 문자열의 다음 위치를 뒤집음
    reverse_string(start + 1, end - 1, str);
}

int main(void) {
    char str[] = "Hello, world!";
    int len = strlen(str);

    // 원래의 문자열 출력
    printf("원래 문자열: %s\n", str);

    // 문자열 뒤집기
    reverse_string(0, len - 1, str);

    // 뒤집어진 문자열 출력
    printf("뒤집은 문자열: %s\n", str);

    return 0;
}
