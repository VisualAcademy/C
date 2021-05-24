// !(NOT) 연산자를 if 문의 조건식에서 사용하기
#include <stdio.h>

main()
{
    int bln = 0; // false
	if (!bln) // ~가 아니라면 ~를 실행해라
	{
		printf("bln: false -> ! -> true");
	}
}
