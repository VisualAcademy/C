#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, area;
    printf("�������� �Է��ϼ���: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("���� ����: %.2f\n", area);
    return 0;
}
