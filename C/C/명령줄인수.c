/*
	������μ�.exe 1 100

*/
#include <stdio.h>

//int main(void)
//int main(void)
int main(int argc, char* argv[], char* envp[])
{
	int i = 0;
	//[1] �Ű����� ���� ��� : ������μ�.exe 1 100 => 3
	printf("argc : %d\n", argc);
	//[2] �Ű������� ���� ��� : ������μ� 1 100
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	//[3] ȯ�溯�� ��� : �ü������ �ٸ�
	i = 0;
	while (envp[i])
	{
		printf("%2d : %s\n", i, envp[i]);
		i++;
	}
	return 0;
}
