/*
1~10���� 3�� ����� ��
*/
main()
{
	//[1] Input
	int intSum = 0;
	int i;
	//[2] Process : Algorithm : �հ�(SUM)
	for (i = 1; i <= 10; i++)           //�ݺ���
	{
		if (i % 3 == 0)                 //����ó��(���͸�)
		{
			intSum += i;//3+6+9         //���๮
		}
	}
	//[3] Output
	printf("%d\n", intSum);
}
