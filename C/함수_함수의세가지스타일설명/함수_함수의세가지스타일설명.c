#include <stdio.h>

void Hi(void) { printf("�ȳ�\n"); }
void Hello(char c) { printf("�Ѱ��� �� �� : %c\n", c); }
int Hap(int a, int b)
{
	int c = a + b;
	return c;
}
void main() {
	//[0] ���� �Լ�(BuiltIn Function) : �̹� ������� �ִ� ���
	printf("�ȳ�\n");
	//[!] ����� ���� �Լ�(User Defined Function)
	//[1] �Ű������� ���� ��ȯ���� ���� �Լ�
	Hi(); Hi();
	//[2] �Ű�����(Parameter)�� �ִ� �Լ�
	Hello('A'); Hello('B');
	//[3] ��ȯ��(Return Value)�� �ִ� �Լ�
	printf("%d\n", Hap(3, 5));
}
