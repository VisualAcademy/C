#include <stdio.h>

//[?] 절댓값을 구하는 함수 만들기
int Abs(int num)
{
    return (num < 0) ? -num : num;
}

int main()
{
    int num = -21;
    int abs = Abs(num);
    printf("%d의 절댓값: %d\n", num, abs);

    return 0;
}
