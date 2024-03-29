/*
문제: 1년을 좀 더 정확히 따지면 평균 365.2425일입니다. 이 값을 바탕으로 일, 시, 분, 초로 출력하는 프로그램을 작성하시오.

출력: 1년 = 365일 5시간 48분 50초
*/

#include <stdio.h>

int main(void)
{
	int day, hour, minute, second;
	double year = 365.2425;
	double dHour;
	double dMinute;

	day = (int)year; // 일

	dHour = (year - day) * 24;
	hour = (int)dHour; // 시

	dMinute = (dHour - hour) * 60;
	minute = (int)dMinute; // 분

	second = (int)((dMinute - minute) * 60); // 초

	printf("1년 = %d일 %d시간 %d분 %d초\n", day, hour, minute, second);

	return 0;
}
