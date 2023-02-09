#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int main(void)
{
	char* strings[] = { "apple", "banana", "cherry", "date", "elderberry" };
	int num_strings = 5;

	qsort(strings, num_strings, sizeof(char*), compare);

	printf("Sorted Strings:\n");
	for (int i = 0; i < num_strings; i++) {
		printf("%s\n", strings[i]);
	}

	return 0;
}
