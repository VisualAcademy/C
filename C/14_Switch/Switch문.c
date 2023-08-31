// if문(조건문), switch문(선택문)
#include <stdio.h>

int main(void)
{
	// 1~5까지의 정수를 입력받아서 값에 해당하는 구문을 처리
	int num = 0;
	printf("1~5까지 정수 입력 : _\b"); scanf("%d", &num);

	// if문으로 조건 판단
	if (num >= 1 && num <= 5)
	{
		// switch문으로 표현식 처리
		switch (num)
		{
		case 1:  printf("%d에 해당하는 기능 구현\n", num); break;
		case 2:  printf("%d에 해당하는 기능 구현\n", num); break;
		case 3:  printf("%d에 해당하는 기능 구현\n", num); break;
		case 4:  printf("%d에 해당하는 기능 구현\n", num); break;
		case 5:  printf("%d에 해당하는 기능 구현\n", num); break;
		default: printf("컴퓨터 고장\n"); break;
		}
	}
	else
	{
		printf("입력 에러...\n");
	}

	return 0;
}
