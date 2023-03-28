#include <stdio.h>
#include <ctype.h>
#include <string.h>

// 함수 원형 선언
char* trim_left(char* str);
char* trim_right(char* str);
char* trim(char* str);

int main(void) {
    char str1[] = " Abc Cba ";
    char str2[] = " Abc Cba ";
    char str3[] = " Abc Cba ";

    printf("[%s]\n", trim_left(str1));
    printf("[%s]\n", trim_right(str2));
    printf("[%s]\n", trim(str3));

    return 0;
}

// trim_left 함수: 문자열의 왼쪽 공백을 제거
char* trim_left(char* str) {
    while (*str) {
        if (isspace(*str)) {
            str++;
        }
        else {
            break;
        }
    }
    return str;
}

// trim_right 함수: 문자열의 오른쪽 공백을 제거
char* trim_right(char* str) {
    int len = (int)strlen(str) - 1;

    while (len >= 0) {
        if (isspace(*(str + len))) {
            len--;
        }
        else {
            break;
        }
    }
    *(str + ++len) = '\0';
    return str;
}

// trim 함수: 문자열의 양쪽 공백을 제거
char* trim(char* str) {
    return trim_left(trim_right(str));
}
