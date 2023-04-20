#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, area;
    printf("반지름을 입력하세요: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("원의 넓이: %.2f\n", area);
    return 0;
}
