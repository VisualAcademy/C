#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문자열을 매개변수로 받아 해당 문자열을 복사한 후 복사된 문자열을 가리키는 포인터를 반환하는 함수
char* return_pointer_to_string(char* str)
{
    // 입력된 문자열의 길이를 구하고, 메모리를 동적 할당합니다.
    char* ptr = (char*)malloc(strlen(str) + 1);
    strcpy(ptr, str); // 동적으로 할당된 메모리에 문자열을 복사합니다.

    // 복사된 문자열의 주소를 반환합니다.
    return ptr;
}

int main(void)
{
    char* str = "Hello, World!";

    // 함수를 호출하여 반환된 포인터를 new_str에 저장합니다.
    char* new_str = return_pointer_to_string(str);

    // new_str이 가리키는 문자열을 출력합니다.
    printf("new_str이 가리키는 문자열: %s\n", new_str);

    // 동적으로 할당된 메모리를 해제합니다.
    free(new_str);

    return 0;
}
