/*
	1.4. ����. PlaceHolder : PlaceHolder.c
*/
#include <stdio.h>
void main()
{
	double x = 123.4567;

	printf("[%-10.3f]", x);

	printf("�ȳ�\n");
	printf("%s\n", "�ȳ�");//�ڸ�ä����
	printf("%c%c\n", 'a', 'b');//����
	printf("%s%s\n", "�ȳ�", "�ϼ���");
	printf("%d\n", 1234);//����
	printf("%f\n", 1234.5678);//�Ǽ�
	printf("%%\n");//%��ȣ ��ü ���
	printf("%s(�ƽ�Ű�ڵ����)\n", "��");
	printf("�ڵ�����\n");//���ڸ����� ���
}
