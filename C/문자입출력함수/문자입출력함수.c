// 문자 입출력 함수
// getch() : 키보드로부터 하나의 문자 입력
// getchar() : 키보드로부터 하나의 문자 입력 + 엔터.
#include <stdio.h>	// getchar()
#include <conio.h>	// getch()

int main(void)
{
	char myChar;
	char myChar2;

	printf("문자 입력 : _\b");
	myChar = getch();
	printf("\n입력한 문자 : %c\n", myChar);

	printf("문자 입력 : _\b");
	myChar2 = getchar();
	printf("\n입력한 문자 : %c\n", myChar2);
}
