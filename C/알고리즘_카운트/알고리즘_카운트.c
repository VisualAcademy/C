/*
알고리즘 : 1부터 100까지 3의 배수의 개수???
*/
main()
{
	//[1] Input
	int intCount = 0;
	int i;
	//[2] Process
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			intCount++;//3의배수일때만 1씩 카운트증가
		}
	}
	//[3] Output
	printf("3의 배수 개수 : %d\n", intCount);//33?
}
