// ������(Pointer) : ������
#include <stdio.h>

void main()
{
	// ����(Value Type) ���� : �ش� ���� �̸������� ������ ����
	int a;
	a = 10;
	// ��������(Pointer Type;Reference Type) ���� : 
	// �ٸ� ������ ������ ����(����Ű��)�ϴ� ����
	int* p;
	p = &a;//a������ �ּ�(Address)�� �������� ������ ���
	// ���
	printf("a�� �� : %d\n", a);//10
	printf("a�� �ּ� : %d\n", &a);//1244992

	printf("p�� �� : %d\n", p);//1244992
	printf("p�� ����Ű�� �� : %d", *p);//10
	printf("p�� �ּ� : %d\n", &p);//1244992+-???=1244980
}
