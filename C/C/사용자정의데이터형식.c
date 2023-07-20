/*
사용자 정의 데이터 형식 : 새로운 데이터 형식을 만듬
*/
#include <stdio.h>
//매크로 상수
#define true 1
#define false 0
//사용자정의 데이터형식 정의
typedef char* string;
typedef int bool;
int main(void) {
	int i;		char c;		float f;	double d;
	string s;//문자열을 저장할 수 있는 키워드 string 생성
	bool b; //참 또는 거짓을 저장할 수 있는 키워드 bool 생성
	i = 10; c = 'A'; f = 3.141592;
	d = 1234.1234;
	s = "안녕하세요.";
	b = false;
	if (b != true) {
		printf("b는 거짓\n");
	}
	else {
		printf("b는 참\n");
	}
}
