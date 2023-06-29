#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char* argv[])
{
    int i;
    int* numbers = malloc((argc - 1) * sizeof(int)); // 동적 메모리 할당

    if (numbers == NULL)
    {
        fprintf(stderr, "메모리 할당에 실패했습니다.\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        numbers[i - 1] = atoi(argv[i]);
    }

    qsort(numbers, argc - 1, sizeof(int), compare);

    printf("정렬된 숫자: ");
    for (i = 0; i < argc - 1; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // 할당된 메모리 해제

    return 0;
}
