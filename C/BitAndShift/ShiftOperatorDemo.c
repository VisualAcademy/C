#include <stdio.h>

main()
{
	int number = 2; // 0010

	printf("%d\n", number << 1); // 0010 -> 0100 : 4
	printf("%d\n", number >> 1); // 0010 -> 0001 : 1
}
