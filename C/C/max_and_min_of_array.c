#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 3 // 배열의 크기를 3으로 설정

int main(void)
{
    int arr[SIZE], max, min; // 크기가 SIZE인 정수 배열과 최댓값, 최솟값을 저장할 변수 선언
    printf("3개의 정수를 입력하세요:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]); // 사용자로부터 SIZE 개의 정수를 입력받음
    }
    max = min = arr[0]; // 최댓값과 최솟값을 배열의 첫 번째 원소로 초기화
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > max) // 현재 원소가 최댓값보다 크다면
        {
            max = arr[i]; // 최댓값을 현재 원소로 갱신
        }
        if (arr[i] < min) // 현재 원소가 최솟값보다 작다면
        {
            min = arr[i]; // 최솟값을 현재 원소로 갱신
        }
    }
    printf("최댓값: %d, 최솟값: %d\n", max, min);
    return 0;
}
