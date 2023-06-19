#include <stdio.h>

// 열거형 정의: 커피 크기
enum CoffeeSize
{
    SMALL,   // 작은 사이즈
    MEDIUM,  // 중간 사이즈
    LARGE    // 큰 사이즈
};

int main(void)
{
    enum CoffeeSize size = MEDIUM; // 열거형 변수 선언 및 값 할당

    int price;

    // 크기에 따른 가격 설정
    switch (size)
    {
    case SMALL:
        price = 2000;
        break;
    case MEDIUM:
        price = 3000;
        break;
    case LARGE:
        price = 4000;
        break;
    default:
        price = 0;
        break;
    }

    // 커피 가격 출력
    printf("커피 가격: %d원\n", price);

    return 0;
}
