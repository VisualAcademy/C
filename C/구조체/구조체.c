#include <stdio.h>

struct _BizCard
{
	char* name;//���ڿ�
	int age;//����
};

typedef struct _BizCard BizCard;

void main(void)
{
	BizCard a;

	a.name = "ȫ�浿";
	a.age = 21;

	printf("%s %d\n", a.name, a.age);
}
