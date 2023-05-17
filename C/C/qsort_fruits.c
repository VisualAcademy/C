#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief 비교 함수
 *
 * 이 함수는 두 문자열을 비교하여 첫 번째 문자열이 사전적으로 앞서면 음수,
 * 같으면 0, 뒤따르면 양수를 반환합니다.
 * 이 함수는 qsort 함수에 의해 호출되어 배열의 정렬 순서를 결정합니다.
 *
 * @param a 비교할 첫 번째 문자열의 포인터
 * @param b 비교할 두 번째 문자열의 포인터
 * @return strcmp 함수를 사용하여 첫 번째 문자열과 두 번째 문자열을 비교한 결과
 */
int compare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}

/**
 * @brief 프로그램의 메인 함수
 *
 * 이 함수에서는 문자열 배열을 선언하고 qsort 함수를 호출하여 배열을 정렬합니다.
 * 그 후, 정렬된 배열을 출력합니다.
 *
 * @return 프로그램의 종료 상태. 정상 종료 시 0을 반환합니다.
 */
int main(void)
{
    // 정렬할 문자열 배열
    const char* fruits[] = { "Orange", "Apple", "Banana" };
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // qsort 함수를 사용하여 배열 정렬
    qsort(fruits, size, sizeof(const char*), compare);

    // 정렬된 배열 출력
    printf("정렬 후 과일 이름: ");
    for (int i = 0; i < size; i++)
    {
        printf("%s ", fruits[i]);
    }

    printf("\n");
    return 0;
}
