//[?] getche() �Լ�: getch() �����ϰ� �ܼ� ȭ�鿡�� ���� �ϳ��� �Է��ϳ� Echo ����� �߰���
#include <stdio.h>

int main()
{
    int grade;

    printf("����� ������? (A, B, C, D, F) _\b");
    grade = getche();
    printf("\n�Է��� ������ %c�Դϴ�.\n", grade);

    return 0;
}
