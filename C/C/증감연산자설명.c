#include <stdio.h>

int main(void) {
    int num1 = 2, num2 = 3, result1, result2;
    printf("num1: %d, num2: %d\n", num1, num2);

    num1++;
    printf("num1++: %d\n", num1);

    ++num1;
    printf("++num1: %d\n", num1);

    result1 = num1++;
    printf("result1 = num1++: result1 = %d, num1++ = %d\n", result1, num1);

    return 0;
}
