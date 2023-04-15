// function_pointer_calc.c

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

// �Լ������� ptr�� ������ ���� a, b�� �Ű������� �޾� 
// �Լ������� ptr�� ����Ű�� �Լ��� a, b�� �����Ͽ� �����ϴ� �Լ�
void calc(void (*ptr)(int a, int b), int a, int b)
{
	ptr(a, b);
}

int main(void)
{
	// �Լ������� ptr�� ����
	void (*ptr)(int a, int b);

	// �Լ������� �迭 ptr2�� ����
	void (*ptr2[2])(int a, int b);

	int a = 3;
	int b = 5;

	// �Լ������� ptr�� add �Լ��� ����Ű���� ��
	ptr = add;

	// �Լ������� �迭 ptr2�� ù ��° ���ҿ� add �Լ���, 
	// �� ��° ���ҿ� sub �Լ��� ���� ����Ű���� ��
	ptr2[0] = add;
	ptr2[1] = sub;

	// ptr�� ����Ű�� �Լ�(add �Լ�)�� ������
	ptr(3, 5); // �븮��

	// �Լ������� �迭 ptr2�� ù ��° ����(add �Լ�)�� �� ��° ����(sub �Լ�)�� ���� ������
	ptr2[0](a, b);
	ptr2[1](a, b);

	// �Լ������� �Ű������� add �Լ��� 5, 5�� �����Ͽ� ������
	calc(add, 5, 5);

	return 0;
}
