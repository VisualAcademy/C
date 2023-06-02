#include <stdio.h>

void func()
{
    auto int num = 0; // 'auto' 지정자 사용
    num++;
    printf("num = %d\n", num);
}

int main(void)
{
    func(); // 'auto'로 선언된 'num' 초기화
    func(); // 'auto'로 선언된 'num' 재초기화
    return 0;
}
