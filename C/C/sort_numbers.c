#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char* argv[])
{
    int i;
    int* numbers = malloc((argc - 1) * sizeof(int)); // ���� �޸� �Ҵ�

    if (numbers == NULL)
    {
        fprintf(stderr, "�޸� �Ҵ翡 �����߽��ϴ�.\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        numbers[i - 1] = atoi(argv[i]);
    }

    qsort(numbers, argc - 1, sizeof(int), compare);

    printf("���ĵ� ����: ");
    for (i = 0; i < argc - 1; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // �Ҵ�� �޸� ����

    return 0;
}
