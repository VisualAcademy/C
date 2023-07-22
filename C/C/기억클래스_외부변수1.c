#include <stdio.h>
int x, y;
void sb1(void) {
    printf("[1] 서브 1 : x = %d\n", x++);
}
void sb2(void) {
    printf("[2] 서브 2 : y = %d\n", y++);
}
int main(void) {
    x = 10;
    y = 20;
    sb1();
    sb2();
    sb3();
    sb4();
}
