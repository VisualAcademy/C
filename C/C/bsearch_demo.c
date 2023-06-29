#include <stdio.h>
#include <stdlib.h>

// 비교 함수: 두 정수를 비교하여 정렬 순서를 결정하는 함수
int compare(const void* a, const void* b)
{
    // 형 변환 후 두 정수의 차를 반환 (결과가 음수면 a < b, 0이면 a == b, 양수면 a > b)
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int values[] = { 1, 2, 3, 4, 5 };

    // 배열의 크기 계산
    int n = sizeof(values) / sizeof(values[0]);

    // 찾고자 하는 값
    int target = 3;
    int* result;

    // 이진 탐색 수행
    // bsearch() 함수는 정렬된 배열에서 특정 값(target)을 이진 탐색 방법으로 찾는다.
    // 찾은 경우 해당 값의 포인터를 반환하고, 그렇지 않은 경우 NULL을 반환한다.
    result = bsearch(&target, values, n, sizeof(int), compare);

    // 결과 출력
    if (result != NULL)
    {
        // 찾은 경우, 해당 값의 인덱스를 함께 출력
        printf("%d을(를) 인덱스 %ld에서 찾았습니다.\n", target, result - values);
    }
    else
    {
        // 찾지 못한 경우
        printf("%d을(를) 찾지 못했습니다.\n", target);
    }

    return 0;
}
