#include <stdio.h>

int main(void)
{
    // 문자 배열 선언과 초기화
    char a[] = { 'a', 'b', 'c', 'd', 'e' };

    // 문자열 포인터 배열 선언과 초기화
    const char* b[] = { "aaa", "bbb", "ccc", "ddd", "eee" };

    // b 배열의 요소들을 출력하는 for 루프
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", b[i]);
    }

    return 0;
}
