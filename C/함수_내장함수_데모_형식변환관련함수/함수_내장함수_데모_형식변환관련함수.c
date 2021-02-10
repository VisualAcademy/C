// 함수_내장함수_데모_형식변환관련함수.c
// - 문자열을 숫자형식으로 변환
// - 숫자형을 문자열로 변환
#include <stdio.h>
#include <stdlib.h> // atoi(), ...

void main(void)
{
	char str[] = "3.1415구이65\045";
	long value = 123456;
	char buffer[100]; // 문자열을 저장하는 그릇

	int i;
	long l;
	double d;

	// 형식 변환 함수를 사용해서 문자열 => 정수/실수
	i = atoi(str); // ASCII to Integer : 정수형(int)
	l = atol(str); // 정수형(long)
	d = atof(str); // 실수형(float, double)

	// 형식 변환 : 숫자 => 문자열
	ltoa(value, buffer, 10); // ltoa(123456, 어디에, 10진수로)

	// 문자열 출력
	printf("%s\n", str);

	// 변환된 값 출력
	printf("%d\n", i);
	printf("%ld\n", l);
	printf("%.10f\n", d);

	printf("%ld => %s\n", value, buffer);
}
