#include <stdio.h>

// ptr_arr 배열의 값을 출력하는 함수
void print_ptr_arr(int* ptr_arr[2])
{
    printf("ptr_arr[0] = %d\n", *ptr_arr[0]); // 첫 번째 포인터가 가리키는 값을 출력
    printf("ptr_arr[1] = %d\n", *ptr_arr[1]); // 두 번째 포인터가 가리키는 값을 출력
}

int main(void)
{
    int x = 0, y = 0;
    int* ptr_arr[2]; // 포인터 배열을 선언

    ptr_arr[0] = &x; // 첫 번째 포인터가 x를 가리키도록 설정
    ptr_arr[1] = &y; // 두 번째 포인터가 y를 가리키도록 설정

    *ptr_arr[0] = 5; // 첫 번째 포인터가 가리키는 변수에 5를 할당
    *ptr_arr[1] = 10; // 두 번째 포인터가 가리키는 변수에 10을 할당

    print_ptr_arr(ptr_arr); // 포인터 배열을 출력하는 함수 호출

    return 0;
}
