#include <stdio.h>

// 사용자 정의 공용체 타입 'Variable' 선언
typedef union Variable
{
    int i;      // 정수형 멤버 'i'
    double d;   // 실수형 멤버 'd'
} Var;          // 공용체 타입에 별칭 'Var' 부여

int main(void)
{
    Var va;     // 공용체 타입 'Var'의 변수 'va' 선언

    va.i = 5;   // 변수 'va'의 정수 멤버 'i'에 값 5 할당

    // 할당된 'va.i'의 값 출력
    printf("va.i의 값 : %d\n", va.i);

    va.d = 3.141592;  // 변수 'va'의 실수 멤버 'd'에 값 3.141592 할당

    // 할당된 'va.d'의 값 출력
    printf("va.d의 값 : %f\n", va.d);

    // 'va.i'의 값을 다시 출력. 주의: 이 시점에서 'va.i'의 값은 정의되지 않음
    printf("va.i의 값 : %d\n", va.i);

    return 0;
}
