#include <stdio.h>

main()
{
	char c1 = 'A';
	char c2 = 'z';
	char c3 = 97;
	char c4 = 0x61;

	// %c ����, %d �ƽ�Ű �ڵ� ��
	printf("%c == %d\n", c1, c1);
	printf("%c == %d\n", c2, c2);
	printf("%c == %d\n", c3, c3); // a == 97
	printf("%c == %d == 0x%x\n", c4, c4, c4); // a == 97 == 0x61
}
