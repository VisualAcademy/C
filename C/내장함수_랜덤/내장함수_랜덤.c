// 내장 함수 : 랜덤값 출력(임의값 출력)
#include <stdio.h>	// printf(), scanf(), ...
#include <stdlib.h>	// rand(), ...
#include <time.h>	// time()

int main(void)
{
	int i = 0;
	int r = 0;
	int l = 0;

	//[1] 난수 초기값 설정
	srand((unsigned)time(0));

	//for (i = 0; i < 10; i++)
	//{
	//	r = rand(); // 0~32767 중 하나를 출력
	//	printf("%d\n", r);
	//}

	//[!] 로또 번호 생성기 : 1~45까지의 수를 5개 랜덤하게 출력
	for (i = 0; i < 5; i++)
	{
		l = rand() % 45 + 1; // rand() % 45 => 0~44까지 중 하나가 나옴
		printf("%d, \t", l);
	}
	printf("\n");
}
