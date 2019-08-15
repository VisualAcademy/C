/*
선택문 : switch~case문
*/
#include <stdio.h>

void main(void)
{
	int NOW = 17; // Hour

	switch (NOW)
	{
	case 1: printf("야심한 시간..."); break;
	case 2: printf("라면 한그릇..."); break;
	case 17: printf("하루 정리..."); break;
	case 21: printf("9시뉴스에 뭐나와요?"); break;
	default: printf("기타 시간대"); break;
	}
	printf("\n");
}
