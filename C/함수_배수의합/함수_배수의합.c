#include <stdio.h>

//함수 원형
void EvenNumber(int n);

void main(void) {
	// 함수 호출
	EvenNumber(10);//1부터 10까지 짝수의합
	EvenNumber(100);//1부터 100까지 짝수의합
	EvenNumber(1000);
}

void EvenNumber(int n) {
	int intSum = 0;
	int i;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			intSum += i;
		}
	}
	printf("1부터 %d까지 짝수의 합 : %d\n", n, intSum);
}
