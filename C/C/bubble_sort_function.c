#include <stdio.h>

/**
 * @brief 버블 정렬 함수
 *
 * 이 함수는 주어진 정수 배열을 오름차순으로 정렬합니다.
 * 정렬 알고리즘으로는 버블 정렬을 사용합니다.
 *
 * @param arr 정렬할 정수 배열
 * @param size 배열의 크기
 */
void bubble_sort(int arr[], int size)
{
    // 'size - 1'번 반복하여 배열의 모든 요소를 확인
    for (int i = 0; i < size - 1; i++)
    {
        // 배열의 'size - i - 1'번째 요소까지 반복
        for (int j = 0; j < size - i - 1; j++)
        {
            // 현재 요소가 다음 요소보다 크다면
            if (arr[j] > arr[j + 1])
            {
                // 두 요소의 위치를 바꿉니다
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief 프로그램의 메인 함수
 *
 * 이 함수에서는 정수 배열을 선언하고 버블 정렬 함수를 호출하여 배열을 정렬합니다.
 * 그 후, 정렬된 배열을 출력합니다.
 *
 * @return 프로그램의 종료 상태. 정상 종료 시 0을 반환합니다.
 */
int main(void)
{
    // 정렬할 정수 배열
    int arr[] = { 34, 12, 45, 8, 21, 17 };

    // 배열의 크기 계산
    int size = sizeof(arr) / sizeof(arr[0]);

    // 배열을 버블 정렬
    bubble_sort(arr, size);

    // 정렬된 배열 출력
    printf("버블 정렬 후 배열: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
