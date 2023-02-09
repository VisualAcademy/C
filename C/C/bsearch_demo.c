#include <stdio.h>
#include <stdlib.h>

int values[] = { 1, 2, 3, 4, 5 };

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main(void)
{
	int n = sizeof(values) / sizeof(values[0]);
	int target = 3;
	int* result;

	result = bsearch(&target, values, n, sizeof(int), compare);

	if (result != NULL)
	{
		printf("Found %d at index %ld\n", target, result - values);
	}
	else
	{
		printf("%d not found\n", target);
	}

	return 0;
}
