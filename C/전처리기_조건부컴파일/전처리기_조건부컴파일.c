#include <stdio.h>

#define N 5
#define IS_PRINT

void main(void)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		// ���Ǻ� ������: #define���� ���ǵǸ� ����
#ifdef IS_PRINT
		printf("%d\n", i); // IS_PRINT�� ���ǵǾ� ������ ����
#endif  
	}
}
