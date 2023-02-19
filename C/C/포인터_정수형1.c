#include <stdio.h>

int main() 
{
    int a = 20, b = 35, c, * pa, * pb, * pc;  // int형 변수 a, b, c와 포인터 변수 pa, pb, pc를 선언하고, 변수 a와 b에 각각 20과 35를 할당

    pa = &a;  // 변수 a의 주소를 포인터 변수 pa에 할당
    pb = &b;  // 변수 b의 주소를 포인터 변수 pb에 할당
    pc = &c;  // 변수 c의 주소를 포인터 변수 pc에 할당

    *pc = *pa + *pb;  // 포인터 변수 pa가 가리키는 변수 a의 값과 포인터 변수 pb가 가리키는 변수 b의 값을 더한 결과를 변수 c에 저장

    printf("%d + %d = %d\n", *pa, *pb, *pc);  // 변수 a, b, c의 값을 출력

    return 0;  // 프로그램이 정상적으로 종료됨을 나타내는 반환 값 0을 반환
}
