main()
{
	//[1] Input
	double num = 3.777;
	double temp = 0.0;
	//[2] Process : 반올림
	temp = (int)(num + 0.5);
	//[3] Output
	printf("소수 첫째자리에서 반올림 : %f\n", temp);//4.0

	//[2] Process : 소수점 둘째자리에서 반올림
	temp = (int)((num + 0.05) * 10) / 10.0;
	//[3] Output
	printf("소수 둘째자리에서 반올림 : %f\n", temp);//3.8
}
