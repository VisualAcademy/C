/*
1~10���� 3�� ����� ���(�հ�/ī��Ʈ) : 18/3 = 6
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
			sum += i;               //[1] �հ� �˰���
			count++;                //[2] ī��Ʈ �˰���
		}
	}
	avg = sum / (double)count;      //[3] ��� �˰���
	//[3] Output
	printf("%.2f\n", avg);
}
