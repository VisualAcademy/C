/*
논리연산자
&& : AND : 둘 다 참일 때에만 참. 나머진 거짓
|| : OR : 하나라도 참이면 참, 둘 다 거짓일 때만 거짓
! : NOT : 참이면 거짓으로, 거짓이면 참으로...
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 7; b = 5;

    c = (a == b) && (a != b);
    printf("c : %d\n", c); // 0 == false 

    c = (a == b) || (a != b);
    printf("c : %d\n", c); // 1 == true

    c = (!(a == b) && (a != b));
    printf("c : %d\n", c); // 1 == true 

    return 0;
}
