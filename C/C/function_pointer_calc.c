#include <stdio.h>

// ������ ���� a�� b�� ���� ���� ����ϴ� �Լ�
void add(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

// ������ ���� a�� b�� �� ���� ����ϴ� �Լ�
void sub(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a - b);
}

// �Լ������� func_ptr�� ������ ���� a, b�� �Ű������� �޾� 
// �Լ������� func_ptr�� ����Ű�� �Լ��� a, b�� �����Ͽ� �����ϴ� �Լ�
void calc(void (*func_ptr)(int a, int b), int a, int b)
{
	func_ptr(a, b);
}

int main(void)
{
	// �Լ������� operation_ptr�� ����
	void (*operation_ptr)(int a, int b);

	// �Լ������� �迭 operations�� ����
	void (*operations[2])(int a, int b);

	int a = 3;
	int b = 5;

	// �Լ������� operation_ptr�� add �Լ��� ����Ű���� ��
	operation_ptr = add;

	// �Լ������� �迭 operations�� ù ��° ���ҿ� add �Լ���, 
	// �� ��° ���ҿ� sub �Լ��� ���� ����Ű���� ��
	operations[0] = add;
	operations[1] = sub;

	// operation_ptr�� ����Ű�� �Լ�(add �Լ�)�� ������
	operation_ptr(3, 5); // �븮��

	// �Լ������� �迭 operations�� ù ��° ����(add �Լ�)�� �� ��° ����(sub �Լ�)�� ���� ������
	operations[0](a, b);
	operations[1](a, b);

	// �Լ������� �Ű������� add �Լ��� 5, 5�� �����Ͽ� ������
	calc(add, 5, 5);

	return 0;
}
