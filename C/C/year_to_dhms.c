/*
����: 1���� �� �� ��Ȯ�� ������ ��� 365.2425���Դϴ�. �� ���� �������� ��, ��, ��, �ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���: 1�� = 365�� 5�ð� 48�� 50��
*/

#include <stdio.h>

int main(void)
{
	int day, hour, minute, second;
	double year = 365.2425;
	double dHour;
	double dMinute;

	day = (int)year; // ��

	dHour = (year - day) * 24;
	hour = (int)dHour; // ��

	dMinute = (dHour - hour) * 60;
	minute = (int)dMinute; // ��

	second = (int)((dMinute - minute) * 60); // ��

	printf("1�� = %d�� %d�ð� %d�� %d��\n", day, hour, minute, second);

	return 0;
}
