#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main(void)
{
	int arr[10];
	int i;

	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}

	qsort(arr, 10, sizeof(int), compare);

	printf("Sorted array: \n");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
