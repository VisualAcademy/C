#include <stdio.h>

// 공용체의 정의
union Data
{
    int i;
    float f;
    char str[20];
};

int main(void)
{
    union Data data;

    // i 멤버에 값 할당
    data.i = 10;
    printf("data.i : %d\n", data.i);

    // f 멤버에 값 할당
    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    // str 멤버에 값 할당
    strcpy(data.str, "C Language");
    printf("data.str : %s\n", data.str);

    return 0;
}
