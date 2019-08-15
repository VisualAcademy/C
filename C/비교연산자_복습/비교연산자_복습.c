/*
비교연산자 :
== : 같은지? 같으면 참(1;true), 그렇지 않으면 거짓
!= : 다른지? 다르면 참, 그렇지 않으면 거짓(0;false)
A < B : A가 B보다 작은지?
A <= B : 작거나 같은지?
A > B : 큰지?
A >= B : 크거나 같은지?
*/
#include <stdio.h>

void main()
{
	int a = 5, b = 3;

	int c = (a == b); // a와 b가 같으냐? -> VB Family : =
	int d = (a != b); // a와 b가 다르냐? -> VB Family : <>

	printf("c : %d\n", c); // 0(false)
	printf("d : %d\n", d); // 1(true)

	system("pause");
}
