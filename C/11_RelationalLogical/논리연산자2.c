/*
��������
&& : AND : �� �� ���� ������ ��. ������ ����
|| : OR : �ϳ��� ���̸� ��, �� �� ������ ���� ����
! : NOT : ���̸� ��������, �����̸� ������...
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 7; b = 5;

    c = (a == b) && (a != b);
    printf("c : %d\n", c); // 0 == false 

    c = (a == b) || (a != b);
    printf("c : %d\n", c); // 1 == true

    c = (!(a == b) && (a != b));
    printf("c : %d\n", c); // 1 == true 

    return 0;
}
