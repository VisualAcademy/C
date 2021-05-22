// 전처리기 지시문 == 매크로 함수
#include <stdio.h>

#define MAX(f, s) ((f > s) ? f : s )
#define MIN(f, s) ((f < s) ? (f) : (s))

void main(void)
{
	int f, s;

	printf("두 수를 입력하시오 : ");
	scanf("%d %d", &f, &s);

	printf("\n 최댓값 : %d\n", MAX(f, s));
	printf("\n 최솟값 : %d\n", MIN(f, s));
}
