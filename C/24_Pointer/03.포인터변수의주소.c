#include <stdio.h>

int main(void)
{
    int a, * pa;

    a = 10;
    pa = &a;

    //[1] ���� a����
    printf("%d\n", a);//a�� ��
    printf("%d\n", &a);//a�� �޸𸮻��� �ּ� : 15727580
    //[2] �������� pa����
    printf("%d\n", pa);//pa������ ������:a���ּҰ� : 15727580
    printf("%d\n", &pa);//pa������ �ּ�:15727568
    printf("%d\n", *pa);//pa�����������ϴ°��ǽ���������

    return 0;
}
