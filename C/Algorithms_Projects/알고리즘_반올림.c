main()
{
	//[1] Input
	double num = 3.777;
	double temp = 0.0;
	//[2] Process : �ݿø�
	temp = (int)(num + 0.5);
	//[3] Output
	printf("�Ҽ� ù°�ڸ����� �ݿø� : %f\n", temp);//4.0

	//[2] Process : �Ҽ��� ��°�ڸ����� �ݿø�
	temp = (int)((num + 0.05) * 10) / 10.0;
	//[3] Output
	printf("�Ҽ� ��°�ڸ����� �ݿø� : %f\n", temp);//3.8
}
