#include <stdio.h>
#include <stdlib.h>

int values[] = { 3, 1, 4, 1, 5 };

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main(void)
{
	int n = sizeof(values) / sizeof(values[0]);

	qsort(values, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", values[i]);
	}

	return 0;
}
