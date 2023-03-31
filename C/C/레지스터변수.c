#include <stdio.h>

int main(void)
{
    // register 변수: 레지스터 메모리에 저장될 것을 요청한다.
    // 데이터 입출력이 빈번한 변수에 사용하며, 속도가 중요한 경우 사용한다.
    // 현대 컴파일러는 자동으로 레지스터 할당을 최적화하기 때문에,
    // register 키워드는 무시될 수도 있다.
    register int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
