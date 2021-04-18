/*
	1.4. 예제. PlaceHolder : PlaceHolder.c
*/
#include <stdio.h>
void main()
{
	double x = 123.4567;

	printf("[%-10.3f]", x);

	printf("안녕\n");
	printf("%s\n", "안녕");//자리채움자
	printf("%c%c\n", 'a', 'b');//문자
	printf("%s%s\n", "안녕", "하세요");
	printf("%d\n", 1234);//정수
	printf("%f\n", 1234.5678);//실수
	printf("%%\n");//%기호 자체 출력
	printf("%s(아스키코드출력)\n", "☎");
	printf("자동구문\n");//인텔리센스 방식
}
