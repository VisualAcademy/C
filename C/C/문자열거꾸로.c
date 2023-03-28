#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 문자열 역변환 : reverse_string()
void reverse_string(char* str) {
    if (str == NULL || *str == '\0') {
        return;
    }

    char* start = str;
    char* end = start + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}

int main(void) {
    char buffer1[100];
    char buffer2[100];

    strcpy(buffer1, "Hello");
    puts(buffer1); // Hello

    reverse_string(buffer1);
    puts(buffer1); // olleH

    strcpy(buffer2, "World");
    puts(buffer2); // World

#ifdef _MSC_VER
    _strrev(buffer2);
    puts(buffer2); // dlroW
#endif

    return 0;
}
