#include <stdio.h>
#include <stdlib.h>

// 메모리 할당 함수
void* get_memory(int size)
{
    void* ptr = malloc(size);  // 원하는 크기만큼의 메모리를 동적으로 할당
    return ptr;  // 할당된 메모리의 주소를 반환
}

int main(void)
{
    int* int_ptr = (int*)get_memory(sizeof(int));  // int 크기만큼 메모리 할당
    *int_ptr = 5;  // 할당된 메모리에 5 저장
    printf("int_ptr에 저장된 값: %d\n", *int_ptr);  // 저장된 값 출력
    free(int_ptr);  // 메모리 해제

    char* char_ptr = (char*)get_memory(sizeof(char));  // char 크기만큼 메모리 할당
    *char_ptr = 'A';  // 할당된 메모리에 'A' 저장
    printf("char_ptr에 저장된 값: %c\n", *char_ptr);  // 저장된 값 출력
    free(char_ptr);  // 메모리 해제

    float* float_ptr = (float*)get_memory(sizeof(float));  // float 크기만큼 메모리 할당
    *float_ptr = 3.14;  // 할당된 메모리에 3.14 저장
    printf("float_ptr에 저장된 값: %f\n", *float_ptr);  // 저장된 값 출력
    free(float_ptr);  // 메모리 해제

    return 0;
}
