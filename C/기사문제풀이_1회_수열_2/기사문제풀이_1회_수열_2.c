//1-2+3-4+5-6+..........+999-1000=-500
#include <stdio.h>

void main() {
	//[1] Input
	int intSum = 0;
	int i = 0;
	//[2] Process
	i = 1;					//초기식
	do {
		if (i % 2 == 1) {	//필터링이 추가된 실행문
			intSum += i;
		}
		else {
			intSum -= i;
		}
		i++;				//증감식
	} while (i <= 1000);		//조건식
	//[3] Output
	printf("결과값 : %d\n", intSum);
}
