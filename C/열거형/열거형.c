//������(Enumeration) : ���� ���Ǵ� ����� �̸� ������ ���� ���
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
		printf("Top�� �����ϼ̱���.\n");
	}

	if (b == Card) {
		printf("ī�� ���� ����\n");
	}
}
