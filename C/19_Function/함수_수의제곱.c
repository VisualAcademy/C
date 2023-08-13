#include <stdio.h>

// Su() 함수를 설계하시오.
int Su(int n);

int main(void) {
	int i;

	i = Su(2);
	printf("%d\n", i);//2*2

	i = Su(10);
	printf("%d\n", i);//10*10
}

int Su(int n) {
	return (n * n);
}
