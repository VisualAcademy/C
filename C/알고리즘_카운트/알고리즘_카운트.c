/*
�˰��� : 1���� 100���� 3�� ����� ����???
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
			intCount++;//3�ǹ���϶��� 1�� ī��Ʈ����
		}
	}
	//[3] Output
	printf("3�� ��� ���� : %d\n", intCount);//33?
}
