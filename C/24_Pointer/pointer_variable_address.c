/*
	����(�Ϲ�, ������)�� �ּ� ���: &
*/
#include <stdio.h>

int main(void)
{
	int i;
	int* p;

	i = 100;
	p = &i;

	printf("�Ϲݺ��� i�� ��: %d\n", i); // 100
	printf("�����ͺ��� p�� �����ϰ� �ִ� ������ ��: %d\n", *p); // 100

	printf("�Ϲݺ��� i�� �ּҰ�: %u\n", &i); // %u(unsigned): ��ȣ���� ����
	printf("�����ͺ��� p�� �ּҰ�: %u\n", &p); // 
	printf("�����ͺ��� p�� ��: %u\n", p); // i������ �ּڰ��� ����

	return 0;
}
