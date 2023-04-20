#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("È­¾¾ ¿Âµµ: %.2f\n", fahrenheit);
    return 0;
}
