#include <stdio.h>

struct _BizCard
{
	char* name;//문자열
	int age;//정수
};

typedef struct _BizCard BizCard;

void main(void)
{
	BizCard a;

	a.name = "홍길동";
	a.age = 21;

	printf("%s %d\n", a.name, a.age);
}
