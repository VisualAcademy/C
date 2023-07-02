#include <stdio.h>

// hi 함수 선언
void hi(void)
{
    printf("%s\n", "안녕하세요.");
}

int main(void)
{
    // hi 함수를 세 번 호출
    hi();
    hi();
    hi();

    return 0;
}
