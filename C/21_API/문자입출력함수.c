// ���� ����� �Լ�
// getch() : Ű����κ��� �ϳ��� ���� �Է�
// getchar() : Ű����κ��� �ϳ��� ���� �Է� + ����.
#include <stdio.h>	// getchar()
#include <conio.h>	// getch()

int main(void)
{
	char myChar;
	char myChar2;

	printf("���� �Է� : _\b");
	myChar = getch();
	printf("\n�Է��� ���� : %c\n", myChar);

	printf("���� �Է� : _\b");
	myChar2 = getchar();
	printf("\n�Է��� ���� : %c\n", myChar2);
}
