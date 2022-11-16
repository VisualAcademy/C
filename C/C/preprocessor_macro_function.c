// 전처리기 지시문 == 매크로 함수
#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

#define MAX(f, s) ((f > s) ? f : s )
#define MIN(f, s) ((f < s) ? (f) : (s))

int main(void)
{
	int f, s;

	printf("두 수를 입력하시오 : ");
	scanf("%d %d", &f, &s);

	printf("최댓값 : %d\n", MAX(f, s));
	printf("최솟값 : %d\n", MIN(f, s));

	return 0; 
}
