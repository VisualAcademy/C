// +, -, *, /, %
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;

    printf("%d\n", a + b); // ´õÇÏ±â: 8
    printf("%d\n", a - b); // »©±â: 2
    printf("%d\n", a * b); // °öÇÏ±â: 15
    printf("%d\n", a / b); // ¸ò: 1  
    printf("%d %% %d = %d\n", a, b, (a % b)); // ³ª¸ÓÁö: 2

    return 0;
}
