#include <stdio.h>
//[3] ��ũ�� ���
#define PI 3.141592
//[4] ��ũ�� �Լ�
#define MAX(a, b) ( (a > b) ? a : b )
//[5] ���Ǻ� ������
#define DEBUG 1
int main(void)
{
	//[1] ����
	int a;
	//[2] ���
	const int B = 20;
	a = 10;
	//B = 30;
	printf("a  = %d\n", a);
	printf("B  = %d\n", B);
	printf("PI  = %f\n", PI);
	printf("MAX(3, 5) = %d\n", MAX(7, 5));
#ifdef DEBUG
	printf("�������Դϴ�.\n");
#else
	printf("���߿Ϸ�Ǿ����ϴ�.\n");
#endif
}