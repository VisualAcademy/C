/*
�� ������ : &&(AND), ||(OR), !(NOT)
&& : �� �� ���� ������ ��
|| : �ϳ��� ���̸� ��
! : ���̸� ����, �����̸� ��
*/
#include <stdio.h>

int main(void)
{
	int a = 3; int b = 5; int c = 0;

	c = (a == b) && (a != b);// c = 0 && 1
	printf("c : %d\n", c);//0(����)

	c = (a == b) || (a != b);
	printf("0 || 1 = %d\n", c);//1(��)

	c = !(a == b); // !0 -> 1
	printf("!0 = %d\n", c);//1(��)

	//system("pause");

	return 0; 
}
