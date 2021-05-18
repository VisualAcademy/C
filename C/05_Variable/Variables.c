/*
	2.3. 예제. 변수의 선언, 초기화, 참조, 크기
*/
#include <stdio.h>

void main(void)
{
	//변수 선언 : DataType
	char myChar;	int intNum;
	double dblNum;
	//변수 초기화 : = 연산자
	myChar = 'A';	intNum = 10;
	dblNum = 10.05;
	//변수 참조 : printf() 함수
	printf("%c\n", myChar);//A
	printf("%d\n", intNum);//10
	printf("%f\n", dblNum);//10.05
	//변수 크기 : sizeof() 연산자
	printf("%d Byte \n"
		, sizeof(myChar));//1 Byte
	printf("%d Byte \n"
		, sizeof(intNum));//4 Byte
	printf("%d Byte \n"
		, sizeof(dblNum));//8 Byte
}
