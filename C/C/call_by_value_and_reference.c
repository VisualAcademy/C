// call_by_value_and_reference.c
#include <stdio.h>

// 값 전달(Call By Value)을 이용하여 변수의 값을 12 증가시키는 함수
void increase_by_12(int value) 
{
    value += 12;
}

// 참조 전달(Call By Reference)을 이용하여 변수의 값을 15 증가시키는 함수
void increase_by_15(int* value) 
{
    *value += 15;
}

// Entry Point
int main(void) 
{
    int num = 7;

    // 값을 전달하여 num 값을 증가시키는 함수 호출
    increase_by_12(num);

    num++; // num = 8

    printf("값 전달 후 메인 : %d\n", num); // [1] 8

    // 주소를 전달하여 num 값을 증가시키는 함수 호출
    increase_by_15(&num);

    num++; // num = 24

    printf("참조 전달 후 메인 : %d\n", num); // [2] 24

    return 0;
}

// 값형/값전달/ValueType/Call By Value
// 참조형/참조(주소)전달/ReferenceType/Call By Reference
// 함수에서 일반변수와 포인터변수 사용
