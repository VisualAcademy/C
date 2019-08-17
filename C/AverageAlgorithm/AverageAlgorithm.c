//[?] n���� ���� �߿��� 80�� �̻� 95�� ������ ������ ���
#include <stdio.h>

// ��� �˰���(Average Algorithm): �־��� ������ �־��� ���ǿ� �ش��ϴ� �ڷ���� ���
main()
{
	//[1] Input: n���� ����
	int data[5] = { 90, 65, 78, 50, 95 };
	int sum = 0; // �հ� ��� �׸�
	int count = 0; // ���� ��� �׸�
	int N = sizeof(data) / sizeof(int); // �ǻ��ڵ�(�����ڵ�)

	//[2] Process: AVG = SUM / COUNT
	for (int i = 0; i < N; i++) // �־��� ����
	{
		if (data[i] >= 80 && data[i] <= 95) // �־��� ����
		{
			sum += data[i]; // SUM
			count++; // COUNT
		}
	}

	double avg = sum / (double)count; // AVERAGE

	//[3] Output
	printf("80�� �̻� 95�� ������ �ڷ��� ���: %.2f\n", avg); // 92.50
}
