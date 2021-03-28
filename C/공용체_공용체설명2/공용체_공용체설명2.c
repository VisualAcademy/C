/*
    8.2.2. 예제. 공용체 사용 예제 : 공용체설명2.c
*/
#include <stdio.h>
union member {
    int a;
    long b;
    double c;
};
main() {
    union member objMember;//16byte
    objMember.a = 1;
    objMember.b = 200;
    printf("a : %d\n", objMember.a);//200
    printf("b : %ld\n", objMember.b);//200
    objMember.c = 100000000;
    printf("c : %f\n", objMember.c);
}
