// if else 구문을 사용한 점수에 따른 학점 계산 프로그램
#include <stdio.h>

void main()
{
	int score;
	char grade;

	printf("당신의 점수는? ");
	scanf_s("%d", &score);

	printf("\n");
	printf("점수: %d점\n", score);

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	printf("학점: %c학점\n", grade);
}
