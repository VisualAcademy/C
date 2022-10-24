#include <stdio.h>

//[!] 매크로 함수 선언
#define max(x, y) x > y ? x : y
#define min(x, y) (x > y ? y : x)

int main()
{
    printf("최댓값: %d\n", max(3, 5)); // 5
    printf("최솟값: %d\n", min(-3, -5)); // -5

    return 0;
}

//최댓값: 5
//최솟값 : -5
