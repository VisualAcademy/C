#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h> // 입출력 관련 표준 라이브러리
#include <stdlib.h> // 메모리 동적 할당 관련 라이브러리

int main(void)
{
    int n, sum = 0; // n은 배열 크기, sum은 배열 요소의 합계 저장
    int* arr; // 정수 배열을 가리킬 포인터 선언
    printf("배열의 크기를 입력하세요: "); // 사용자에게 배열 크기 입력 요청
    scanf("%d", &n); // 배열 크기 입력받음
    arr = (int*)malloc(n * sizeof(int)); // n개의 정수 배열에 동적 메모리 할당

    // 메모리 할당에 실패한 경우 에러 메시지 출력 후 프로그램 종료
    if (arr == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요:\n", n); // 사용자에게 n개의 정수 입력 요청
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // 정수 입력받아 배열에 저장
        sum += arr[i]; // 입력받은 정수를 sum에 누적
    }

    printf("합계: %d\n", sum); // 배열 요소의 합계 출력
    free(arr); // 동적 할당 받은 메모리 해제
    return 0; // 프로그램 정상 종료
}
