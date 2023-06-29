#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

// 문자열 비교를 위한 사용자 정의 함수
int compare_strings(const void* str1, const void* str2)
{
    return strcmp(*(const char**)str1, *(const char**)str2);
}

// 문자열 배열 출력을 위한 함수
void print_array(const char* arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    const char* search_key = "banana"; // 찾고자 하는 문자열
    const char** found_value; // 검색 결과를 저장할 포인터
    const char* words[] = { "cherry", "apple", "pear", "banana", "orange" }; // 검색 대상 문자열 배열 (정렬되지 않음)
    int n = sizeof(words) / sizeof(words[0]);

    printf("정렬 전: ");
    print_array(words, n); // 정렬 전 배열 출력

    // 배열을 사전 순으로 정렬
    qsort(words, n, sizeof(words[0]), compare_strings);

    printf("정렬 후: ");
    print_array(words, n); // 정렬 후 배열 출력

    // 이진 검색 수행 (찾고자 하는 값, 배열, 배열 크기, 배열 원소 크기, 비교 함수)
    found_value = bsearch(&search_key, words, n, sizeof(words[0]), compare_strings);

    // 검색 결과 출력
    if (found_value)
    {
        printf("%s를 찾았습니다.\n", *found_value);
    }
    else
    {
        printf("%s를 찾지 못했습니다.\n", search_key);
    }

    return 0;
}
