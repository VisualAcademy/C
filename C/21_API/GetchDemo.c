//[?] getch() �Լ�: �ܼ� ȭ�鿡�� ���� �ϳ��� �Է� + ����(�Է��� ���ڰ� ǥ��) ǥ�� ����
#include <stdio.h>

int main()
{
    int grade;

    printf("����� ������? (A, B, C, D, F) _\b");
    grade = getch();
    printf("\n�Է��� ������ %c�Դϴ�.\n", grade);

    return 0;
}
