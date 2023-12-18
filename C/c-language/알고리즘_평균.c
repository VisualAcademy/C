/*
1~10까지 3의 배수의 평균(합계/카운트) : 18/3 = 6
*/
main()
{
	//[1] Input
	int sum = 0;
	int count = 0;
	double avg = 0.0;
	int i = 0;
	//[2] Process
	for (i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;               //[1] 합계 알고리즘
			count++;                //[2] 카운트 알고리즘
		}
	}
	avg = sum / (double)count;      //[3] 평균 알고리즘
	//[3] Output
	printf("%.2f\n", avg);
}
