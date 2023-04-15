#include <stdio.h>

int main(void)
{
    int i = 10;
    int* j = &i; //포인터 j가 i의 주소를 참조

    printf("Decimal i = %d Pointer i = %p\n", i, &i);
    //i의 10진수 값과 i의 주소 출력
    printf("Pointer j = %p j = %d j = %p\n", j, *j, &j);
    //포인터 j의 값(즉, i의 주소)과 i의 값(즉, *j) 출력, j의 주소 출력

    return 0;
}
