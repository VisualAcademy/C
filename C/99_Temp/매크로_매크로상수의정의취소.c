#include <stdio.h>

//#define HI "�ȳ�"

#if defined HI		//���� Ȯ��
#undef HI			//���� ���
#define HI "�氡"	//������
#else
#define HI "�ȳ�"	//��ũ�� ����
#endif

void main(void)
{
	printf("%s \n", HI);
}