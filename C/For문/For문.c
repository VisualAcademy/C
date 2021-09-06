/*
	For문 : 반복문
		for (초기식; 조건식; 증감식)
		{
			초기식부터 조건식이 만족하는 동안 증감식만큼 증가해서 반복
		}
*/
#include <stdio.h>

int main(void)
{
	int i = 0;
	for (i = 1; i <= 10; i++)	// 1부터 10까지 1씩 증가 : 10번 반복
	{
		printf("안녕하세요.\n");
	}
	for (i = 0; i < 3; i++)		// i = 0, 1, 2 < 3
	{
		printf("반갑습니다.\n");
	}
	for (i = 1; i <= 5; i++)
	{
		printf("%d\n", i); // 1~5
	}
	// 구구단의 2단만 출력
	for (i = 1; i <= 9; i++)
	{
		printf("2 * %d = %d\n", i, (2 * i));
	}
}
