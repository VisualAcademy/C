// 자리 표시자(채움자) : Place Holder
#include <stdio.h>
#include <stdlib.h>

main()
{
	printf("안녕\n");
	printf("%s\n", "안녕");							// %s : 문자열 출력 자리
	printf("%d.%s\n", 3, "반갑습니다.");				// %d : 정수 출력 자리
	printf("%f\n", 3.141592654);					// %f : 실수 출력 자리
	printf("%.2f\n", 3.141592654);					// %.2f : 소수점 둘째자리
	printf("%10.2f\n", 3.141592654);				// %10.2f : 10칸 잡고 소수점 둘째자리
	printf("%-10.2f, %d\n", 3.141592654, 10);		// %-10.2f : 왼쪽 정렬
	printf("%c%c%c\n", 'A', 'B', 'C');				// %c : 문자 하나, 작은 따옴표
	printf("%%\n");									// %% : % 기호 자체 출력
	printf("아스키코드 : %s\n", "☎");				// ㄱ, ㄴ, ㄷ, ㄹ, ㅁ 등 입력 후 한자키

	system("pause");
}
