#include <stdio.h>
#include "extern_functions.h"

extern int shared_value; // extern_functions.c에 정의된 shared_value 변수를 외부 참조로 선언

int main(void)
{
    shared_value = 5; // shared_value 값을 5로 설정
    printf("extern_main.c 파일에서 설정한 shared_value: %d\n", shared_value); // 현재 shared_value 값을 출력

    multiply_by_two(); // extern_functions.c에 정의된 multiply_by_two 함수 호출. 이 함수는 shared_value를 2배로 만듦.

    return 0;
}
