//열거형(Enumeration) : 자주 사용되는 상수를 미리 정의해 놓는 방법
#include <stdio.h>

enum Direction
{
	Top, Bottom, Left, Right
};
enum Pay
{
	Mobile, Card, Direct
};

void main(void)
{
	int a = Top;
	int b = Card;

	if (a == Top) {
		printf("Top을 선택하셨군요.\n");
	}

	if (b == Card) {
		printf("카드 결제 선택\n");
	}
}
