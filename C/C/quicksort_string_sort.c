#include <stdio.h>
#include <string.h>

void quickSort(char** strings, int left, int right)
{
    int i, j;
    char* pivot, * temp;
    if (left < right)
    {
        pivot = strings[left];
        i = left;
        j = right;
        while (i < j)
        {
            while (strcmp(strings[j], pivot) >= 0 && i < j)
            {
                j--;
            }
            while (strcmp(strings[i], pivot) <= 0 && i < j)
            {
                i++;
            }
            if (i < j)
            {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
        strings[left] = strings[j];
        strings[j] = pivot;
        quickSort(strings, left, j - 1);
        quickSort(strings, j + 1, right);
    }
}

int main(void)
{
    char* strings[] = { "quick", "sort", "example", "in", "c", "language" };
    int n = sizeof(strings) / sizeof(strings[0]);
    int i;

    quickSort(strings, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
