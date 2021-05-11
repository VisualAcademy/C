#include <stdio.h>

#define N 5
#define IS_PRINT

void main(void)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		// 조건부 컴파일: #define으로 정의되면 실행
#ifdef IS_PRINT
		printf("%d\n", i); // IS_PRINT가 정의되어 있으면 실행
#endif  
	}
}
