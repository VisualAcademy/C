/*
	명령줄인수.exe 1 100

*/
#include <stdio.h>

//int main(void)
//int main(void)
int main(int argc, char* argv[], char* envp[])
{
	int i = 0;
	//[1] 매개변수 개수 출력 : 명령줄인수.exe 1 100 => 3
	printf("argc : %d\n", argc);
	//[2] 매개변수의 값을 출력 : 명령줄인수 1 100
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	//[3] 환경변수 출력 : 운영체제마다 다름
	i = 0;
	while (envp[i])
	{
		printf("%2d : %s\n", i, envp[i]);
		i++;
	}
	return 0;
}
