#include <stdio.h>

int main() 
{
    int a, * pt;  // int형 변수 a와 포인터 변수 pt를 선언

    a = 365;  // 변수 a에 365를 할당
    pt = &a;  // 변수 a의 주소를 포인터 변수 pt에 할당

    printf("변수 a값 : %d\n", a);  // 변수 a의 값을 출력
    printf("변수 a의 주소 : %p\n", (void*)&a);  // 변수 a의 주소를 출력
    printf("포인터 변수 값 : %p\n", (void*)pt);  // 포인터 변수 pt가 가리키는 변수의 주소를 출력
    printf("포인터 주소 : %p\n", (void*)&pt);  // 포인터 변수 pt의 주소를 출력

    *pt = *pt + 2;  // 포인터 변수 pt가 가리키는 변수의 값을 2 증가

    printf("변수 a값 : %d\n", a);  // 변수 a의 값을 출력
    printf("포인터 변수 값 : %p\n", (void*)pt);  // 포인터 변수 pt가 가리키는 변수의 주소를 출력

    return 0;  // 프로그램이 정상적으로 종료됨을 나타내는 반환 값 0을 반환
}
//변수 a값 : 365
//변수 a의 주소 : 00D6FBF8
//포인터 변수 값 : 00D6FBF8
//포인터 주소 : 00D6FBEC
//변수 a값 : 367
//포인터 변수 값 : 00D6FBF8
