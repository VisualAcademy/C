#include <stdio.h>

// 정수의 절댓값을 반환하는 함수
int calculate_absolute_value(int num)
{
    // 입력받은 정수가 0 또는 양수이면 그대로 반환, 음수이면 양수로 변환하여 반환
    return (num < 0) ? -num : num;
}

int main(void)
{
    // 테스트를 위한 정수 값
    int num = -21;

    // calculate_absolute_value 함수를 사용하여 절댓값 구하기
    int abs_value = calculate_absolute_value(num);

    // 결과 출력
    printf("%d의 절댓값: %d\n", num, abs_value);

    return 0;
}
