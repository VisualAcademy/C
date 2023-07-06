#include <stdio.h>
#include "extern_functions.h"

int shared_value; // 전역 변수 shared_value 선언

void multiply_by_two()
{
    shared_value *= 2; // shared_value를 2배로 만듦

    // shared_value가 2배로 변경된 후의 값을 출력
    printf("extern_functions.c 파일에서 2배로 곱한 shared_value: %d\n", shared_value);
}
