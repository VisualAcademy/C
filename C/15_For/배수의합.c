//[!] 1부터 100까지 
//3의 배수 또는 4의 배수의 합을 구하는 프로그램을 작성 : 2551 
#include <stdio.h>
void main() {
    //[1] Initilize
    int i; // 범위 반복용.
    //[2] Input
    int sum = 0;
    //[3] Process : Algorithm : Logic => 공통
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 4 == 0) {
            sum += i; // 누적(Sum)
        }
    }
    //[4] Output
    printf("1~100까지 배수합 : %d\n", sum);
    //[5] Dispose
    // Empty
}
