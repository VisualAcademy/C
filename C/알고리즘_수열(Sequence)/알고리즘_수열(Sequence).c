#include <stdio.h>

void main(void)
{
	//[1] Init/Input
	int i = 0; // 반복
	int intNum = 0; // 수열 합계
	//[2] Process
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			intNum -= i;
		}
		else {
			intNum += i;
		}
	}
	//[3] Output
	printf("1-2+3-4+...+9-10=%d\n"
		, intNum);
}
