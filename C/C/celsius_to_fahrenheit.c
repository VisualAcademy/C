#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("���� �µ��� �Է��ϼ���: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("ȭ�� �µ�: %.2f\n", fahrenheit);
    return 0;
}
