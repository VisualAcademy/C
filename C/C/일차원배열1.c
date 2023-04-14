/*
	6.1.1. 예제. 배열의 선언, 요소수 생성, 초기화, 참조 : 일차원배열1.c
*/
//사용자로부터 3개의 데이터를 입력받아,
//합계를 구하는 프로그램.
#include <stdio.h>
int main() {
	//Init
	int i, intSum = 0;
	int intNum[3];//배열	
	//Input
	for (i = 0; i < 3; i++) {
		printf("\n%d번째 입력 : ", i + 1);
		scanf("%d", &intNum[i]);
	}
	//Process
	for (i = 0; i < 3; i++) {
		intSum += intNum[i];
	}
	//Output
	printf("\n합계 : %d\n", intSum);
	return 0;
}
