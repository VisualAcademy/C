/*
    4.1.1. ����. if�� ��� ���� : ���ǹ�1.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int intNum = 0;
    printf("�����Է�:_\b");
    scanf("%d", &intNum);
    printf("\n�Է��Ѽ�:%d", intNum);

    //[1] if��. : ���밪.
    if (intNum < 0) {	//���ǽ�
        intNum = -intNum;
    }
    printf("\n���밪:%d", intNum);

    //[2] else��. : ¦��, Ȧ�� ����
    if (intNum % 2 == 0) {	//���ǽ�
        printf("\n¦��");	//���϶�
        printf("\n");		//����
    }
    else {	//�ܹ�(�߰�ȣ ��������)
        printf("\nȦ��");	//�����϶�
    }

    //[3] else if��. : ������ ���� ó��
    if (intNum % 7 == 0) {
        printf("7�� ���");
    }
    else if (intNum % 5 == 0) {
        printf("5�� ���");
    }
    else if (intNum % 3 == 0) {
        printf("3�� ���");
    }
    else {
        printf("3,5,7�� ����� �ƴ�.");
    }

    return 0;
}
