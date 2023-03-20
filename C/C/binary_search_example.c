// binary_search_example.c 

#include <stdio.h>
#include <stdlib.h>
#include <search.h>

// 정수 비교를 위한 사용자 정의 함수
int compare_integers(const void* value1, const void* value2) {
    return (*(int*)value1 - *(int*)value2);
}

// 배열 출력을 위한 함수
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int search_key = 5; // 찾고자 하는 값
    int* found_value; // 검색 결과를 저장할 포인터
    int numbers[5] = { 45, 12, 5, 89, 27 }; // 검색 대상 배열

    printf("정렬 전: ");
    print_array(numbers, 5); // 정렬 전 배열 출력

    // 배열을 오름차순으로 정렬
    qsort(numbers, 5, sizeof(numbers[0]), compare_integers);

    printf("정렬 후: ");
    print_array(numbers, 5); // 정렬 후 배열 출력

    // 이진 검색 수행 (찾고자 하는 값, 배열, 배열 크기, 배열 원소 크기, 비교 함수)
    found_value = 
        bsearch(&search_key, numbers, 5, sizeof(numbers[0]), compare_integers);

    // 검색 결과 출력
    if (found_value)
    {
        printf("%d를 %ld번 위치에서 찾았습니다.\n", 
            search_key, found_value - numbers);
    }
    else
    {
        printf("%d를 찾지 못했습니다.\n", search_key);
    }

    return 0;
}
