#include <stdio.h>

int main()
{
    // 정수형 변수 선언 및 초기화
    int width = 1920;
    int height = 1080;

    // 정수형 포인터 선언 및 참조
    int* w = &width;
    int* h = &height;

    // 역참조로 값 출력
    printf("FHD: %d X %d\n", *w, *h);

    // 역참조(dereference)로 값 설정
    *w = 3840;
    *h = 2160;

    // 역참조로 값 출력
    printf("UHD: %d X %d\n", *w, *h);

    return 0;
}
