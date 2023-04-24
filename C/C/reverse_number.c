#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하기 위한 매크로 정의
#include <stdio.h>

// num이라는 정수를 거꾸로 출력하는 함수
void reverse_number(int num)
{
    // 숫자가 0보다 클 동안 반복
    while (num > 0)
    {
        printf("%d", num % 10); // 숫자의 가장 오른쪽 자릿수를 출력
        num /= 10; // 숫자를 10으로 나누어 자릿수를 줄임
    }
    printf("\n"); // 출력을 완료한 후 개행 문자 출력
}

int main(void)
{
    int num; // 사용자로부터 입력받을 숫자를 저장할 변수

    printf("거꾸로 출력할 숫자를 입력하세요: "); // 사용자에게 숫자를 입력하도록 안내
    // 숫자를 입력받고 반환 값이 1이 아닌 경우 입력 오류 처리
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "숫자를 입력해주세요.\n"); // 오류 메시지 출력
        return 1; // 프로그램을 오류 코드 1과 함께 종료
    }

    printf("거꾸로 출력한 결과: "); // 결과 출력 시작을 알리는 메시지 출력
    reverse_number(num); // 입력받은 숫자를 거꾸로 출력하는 함수 호출

    return 0; // 프로그램 정상 종료
}
