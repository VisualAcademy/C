#include <stdio.h>

int main() {
    // [1] 값형 배열 선언
    int a[] = { 1, 2, 3, 4, 5 };
    // [2] 포인터 변수 : 변수/배열의 시작 주소를 참조
    int* p = a;

    // [3] 값형 배열 출력
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    // [4] 포인터 변수를 이용한 배열 출력
    printf("%d %d %d %d %d\n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
