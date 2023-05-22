#include <stdio.h> // 표준 입출력 라이브러리를 포함

// 두 개의 정수를 매개변수로 받아 둘 중 작은 수를 반환하는 함수
int find_min(int a, int b)
{
    // 삼항 연산자를 사용하여 a와 b 중 더 작은 수를 반환
    return (a < b) ? a : b;
}

int main(void)
{
    int num1, num2; // 사용자로부터 입력받을 두 숫자를 저장할 변수 선언

    // 사용자에게 두 숫자를 입력하도록 요청
    printf("비교할 두 숫자를 입력하세요: ");
    scanf("%d %d", &num1, &num2); // 사용자로부터 두 숫자를 입력받아 num1, num2에 저장

    // find_min 함수를 사용하여 최솟값을 찾아 출력
    printf("최솟값: %d\n", find_min(num1, num2));

    return 0; // 프로그램이 성공적으로 종료됨을 시스템에 알림
}
