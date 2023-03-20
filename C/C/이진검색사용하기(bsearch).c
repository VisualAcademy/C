#include <stdio.h>
#include <stdlib.h>
#include <search.h>

// 함수 정의
int compare_integers(const void* value1, const void* value2) {
    return (*(int*)value1 - *(int*)value2);
}

int main(void)
{
    int search_key = 5;
    int* found_value;
    int numbers[5] = { 45, 12, 5, 89, 27 };

    qsort(numbers, 5, sizeof(numbers[0]), compare_integers);
    found_value = bsearch(&search_key, numbers, 5, sizeof(numbers[0]), compare_integers);

    if (found_value)
    {
        puts("5를 찾았습니다.");
    }

    return 0;
}
