#include <stdio.h>

// 두 정수의 값을 교환하는 함수입니다.
void swap(int* a, int* b)
{
    int temp = *a;  // 'a'가 가리키는 곳의 값을 'temp'에 저장합니다.
    *a = *b;  // 'b'가 가리키는 곳의 값을 'a'가 가리키는 곳에 저장합니다.
    *b = temp;  // 'temp'에 저장된 원래 'a'의 값을 'b'가 가리키는 곳에 저장합니다.
}

int main(void)
{
    int num1 = 5, num2 = 10;
    printf("교환 전: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);  // 'swap' 함수를 호출하여 'num1'과 'num2'의 값을 교환합니다.
    printf("교환 후: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
