// ����_�簢���ǳ���.c
#include <stdio.h>

void main(void)
{
	//���� ����
	float fltWidth, fltHeight;
	float fltResult;
	//���� �ʱ�ȭ
	fltWidth = 0.0;
	fltHeight = 0.0;
	fltResult = 0.0;
	//����ڷκ��� ������ �Է�
	printf("���� ���� : ");
	scanf("%f", &fltWidth);
	printf("���� ���� : ");
	scanf("%f", &fltHeight);
	//ó�� : ���� ���ϱ�
	fltResult = fltWidth * fltHeight;
	//���
	printf("\n�־��� �簢���� ���� : %f\n", fltResult);
}
