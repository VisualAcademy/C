#include <stdio.h>

//[1] ��ũ�� ����
//#define HI "�ȳ��ϼ���"

//[2] ��ũ�� ���� Ȯ��
#if ! defined HI
#define HI "�ݰ����ϴ�"
#endif

int main(void)
{
	printf("%s\n", HI);
}