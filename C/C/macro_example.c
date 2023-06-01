#include <stdio.h>

#define PI 3.14159
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
    int a = 10, b = 20;
    float r = 5.0;
    printf("원주율의 값: %f\n", PI);
    printf("%d와 %d 중 작은 값: %d\n", a, b, MIN(a, b));
    printf("반지름 %f인 원의 면적: %f\n", r, PI * r * r);
    return 0;
}
