#include <stdio.h>

// 원본 함수 선언
int sum(int f, int s)
{
    return (f + s); 
}

int main(void)
{
    // 2개의 int 타입 매개 변수를 갖는 
    // 함수를 대신해서 호출해주는 func_sum 이름의 함수 포인터 생성 
    int (*func_sum)(int, int); 

    // 함수 포인터에 함수의 시작 주소 할당 
    func_sum = &sum; 

    // 함수 포인터를 사용하여 함수 호출 
    printf("%d\n", func_sum(3, 5)); // 8

    return 0;
}
