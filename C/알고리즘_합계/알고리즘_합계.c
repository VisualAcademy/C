/*
1~10까지 3의 배수의 합
*/
main()
{
	//[1] Input
	int intSum = 0;
	int i;
	//[2] Process : Algorithm : 합계(SUM)
	for (i = 1; i <= 10; i++)           //반복문
	{
		if (i % 3 == 0)                 //조건처리(필터링)
		{
			intSum += i;//3+6+9         //실행문
		}
	}
	//[3] Output
	printf("%d\n", intSum);
}
