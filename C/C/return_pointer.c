#include <stdio.h>
#include <stdlib.h>

// 정수를 받아 포인터 반환
int* return_pointer_to_int(int num)
{
    // 정수 크기 메모리 동적 할당
    int* ptr = (int*)malloc(sizeof(int));

    // ptr가 가리키는 곳에 num 값 저장
    *ptr = num;

    // num이 저장된 주소 반환
    return ptr;
}

int main(void)
{
    int num = 10;

    // 함수 호출, 반환된 포인터 ptr에 저장
    int* ptr = return_pointer_to_int(num);

    // ptr이 가리키는 값 출력
    printf("포인터가 가리키는 값: %d\n", *ptr);

    // 동적 할당 메모리 해제
    free(ptr);

    return 0;
}
