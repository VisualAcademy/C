// 아래 주어진 데이터에서 짝수의 평균을 구하시오.
#include <stdio.h>

main()
{
	//Input  
	int a[10] = { 11, 22, 33, 44, 55, 54, 43, 32, 21, 10 };
	int sum = 0;
	int count = 0;
	float avg = 0.0;
	int i = 0;
	int* p; p = a;
	//Process
	for (i = 0; i < 10; i++) {
		if (*(p + i) % 2 == 0) {
			sum += *(p + i);        //합계
			count++;                //건수
		}
	}
	avg = sum / (float)count;       //평균
	//Output
	printf("짝수의 합계 : %d\n"
		"짝수의 건수 : %d\n"
		"짝수의 평균 : %.1f\n", sum, count, avg);
}
