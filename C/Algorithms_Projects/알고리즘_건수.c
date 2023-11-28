// 파일명: 알고리즘_건수.c

/*
while문을 사용해서 1부터 10까지
3의 배수의 개수(Count) : 3, 6, 9 : 3개
*/
int main(void)
{
	//[1] Init/Input
	int count = 0;//카운트 저장 변수
	int i = 0;//반복용 변수
	//[2] Process : 알고리즘 : 반복문+조건문+연산자
	i = 1;                      //[1] 초기식
	do
	{
		if (i % 3 == 0)
		{
			count++;            //[!] 실행문
		}
		i++;                    //[3] 증감식
	} while (i <= 10);           //[2] 조건식
	/*
	i = 1;                      //[1] 초기식
	while (i <= 10)             //[2] 조건식
	{
		if (i % 3 == 0)         //[!] 필터링
		{
			count += 1;            //[!] 실행문
		}
		i++;                    //[3] 증감식
	}
	*/
	/*
	for (i = 1; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			count = count + i;
		}
	}
	*/
	//[3] Output
	printf("1~10까지 3의 배수의 개수 : %d\n", count);//3

	return 0; 
}
