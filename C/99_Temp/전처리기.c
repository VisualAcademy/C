/*
	전처리기(PreProcessor): 실행할 상수 또는 식을 미리 정의
*/
#include <stdio.h>

#define HI "안녕하세요."
#define F 10
#define S 20
#define T 30
#define Write printf
#define MAX 100
#define MIN 0

void main(void)
{
	const int NUM = 10; // 상수(Constant)

	printf("%s\n", HI);
	printf("%d + %d + %d = %d\n", F, S, T, (F + S + T)); // 10 + 20 + 30 = 60
	Write("%s\n", HI);
}
