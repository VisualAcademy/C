// getch(), _getch() : Ű����κ��� �ϳ��� ���� �Է�
#include <stdio.h>

int main()
{
	char grade;

	printf("C ��� ���α׷��� ����: _\b");

	grade = _getch();

	printf("\n%c �����Դϴ�.\n", grade);

	return 0;
}
