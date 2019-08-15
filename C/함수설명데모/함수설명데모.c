/*
	�Լ�(Function;Method) :
		���� ����ϴ� ���α׷� ������ �ϳ��� �̸����� ��� ����(Input, Process, Output)
*/
#include <stdio.h>

//[0] �Լ� ����(ProtoType) ����
void Hello(void);
void Hi(char msg[]);
void Sum(int first, int second);
int Hap(int f, int s);

// ���α׷��� ��Ʈ�� ����Ʈ(Entry Point;������)
void main(void)
{
	//[0] ���� ���� ��
	int result = 0;
	//[1] ȣ��
	Hello(); Hello(); Hello();
	//[2] ȣ��
	Hi("�ȳ��ϼ���."); Hi("�ݰ����ϴ�.");
	Sum(3, 5);
	//[3] ȣ��(Call)
	result = Hap(10, 20);
	printf("�Ѱܿ� �����: %d\n", result);
}

//[1] �Ű�����(Parameter;Argument;����;�μ�)�� ���� ��ȯ��(Return Value)�� ���� �Լ� ����
void Hello(void)
{
	printf("�ȳ��ϼ���.\n");
}
//[2] �Ű������� �ִ� �Լ� ����
void Hi(char msg[])
{
	printf("%s\n", msg);
}
void Sum(int first, int second)
{
	printf("%d + %d = %d\n", first, second, (first + second));
}
//[3] �Ű������� �ְ� ��ȯ���� �ִ� �Լ� ���� : Input, Process, Output
int Hap(int f, int s)
{
	int r = f + s; // Process
	return r; // ��ȯ
}
