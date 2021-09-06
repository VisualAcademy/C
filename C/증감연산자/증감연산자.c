/*
	증감연산자 : ++, --
		++(증가) : 정수형 변수의 값을 1증가
		--(감소) : 정수형 변수의 값을 1감소
		전위(앞) : 증감연산자가 앞에 위치하면 선 증감 후 대입 : 우선순위 제일 높음
		후위(뒤) : 증감연산자가 뒤에 위치하면 대입 후 증감	 : 우선순위 제일 낮음
*/
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int r;

	a = b = c = 10;
	r = 0;

	// 연산자
	a = a + 1;		//[1] 기본 : a에 1을 더해서 a에 대입
	a += 1;			//[2] 대입 : a에 1을 누적
	a++;			//[3] 증감 : a의 값을 1 증가

	// 출력
	printf("%d\n", a); // 13

	// 전위
	++b;	printf("%d\n", b); // 11
	// 후위
	b++;	printf("%d\n", b); // 12

	// 차이점 비교
	r = c++;	// 대입 후 증감
	printf("%d, %d\n", r, c); // ? 10, 11

	// c = 11;
	r = ++c;	// 증감 후 대입
	printf("%d, %d\n", r, c); // ? 12, 12

	// 연산자 복합
	a = 3; b = 5; c = 7;
	r = a++ + --b - c--;

	printf("%d, %d, %d, %d\n", r, a, b, c);			// ? 0, 4, 4, 6
}
