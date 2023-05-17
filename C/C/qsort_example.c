#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 비교 함수
 *
 * 이 함수는 두 정수를 비교하여 첫 번째 정수가 작으면 음수, 같으면 0, 크면 양수를 반환합니다.
 * 이 함수는 qsort 함수에 의해 호출되어 배열의 정렬 순서를 결정합니다.
 *
 * @param a 비교할 첫 번째 정수의 포인터
 * @param b 비교할 두 번째 정수의 포인터
 * @return 첫 번째 인자와 두 번째 인자의 차이값
 */
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

/**
 * @brief 프로그램의 메인 함수
 *
 * 이 함수에서는 정수 배열을 선언하고 qsort 함수를 호출하여 배열을 정렬합니다.
 * 그 후, 정렬된 배열을 출력합니다.
 *
 * @return 프로그램의 종료 상태. 정상 종료 시 0을 반환합니다.
 */
int main(void)
{
    // 정렬할 정수 배열
    int numbers[] = { 3, 2, 1, 5, 4 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // qsort 함수를 사용하여 배열 정렬
    qsort(numbers, size, sizeof(int), compare);

    // 정렬된 배열 출력
    printf("정렬 후 배열: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
