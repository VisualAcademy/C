#include <stdio.h>

// ����ü�� ����
union Data
{
    int i;
    float f;
    char str[20];
};

int main(void)
{
    union Data data;

    // i ����� �� �Ҵ�
    data.i = 10;
    printf("data.i : %d\n", data.i);

    // f ����� �� �Ҵ�
    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    // str ����� �� �Ҵ�
    strcpy(data.str, "C Language");
    printf("data.str : %s\n", data.str);

    return 0;
}
