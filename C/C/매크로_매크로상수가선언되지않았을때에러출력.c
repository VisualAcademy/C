/*
	#define
	#if ! defined
	#error
*/
#include <stdio.h>

//��ũ�� ����
//#define HELLO "�ȳ��ϼ���..."

//��ũ�� ���ǵ��� �ʾ��� �� ���� �߻�
#if ! defined HELLO
#error "HELLO��� ��ũ�ΰ� ���ǵ��� �ʾҽ��ϴ�."
#endif

int main(void)
{
	printf("%s\n", HELLO);
}