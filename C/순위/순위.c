//����(RANK) �˰��� : ��� �����͸� 1������ 
//�ʱ�ȭ ��Ų �� �񱳵����Ͱ� �� ũ�� 1�� ��� ����
#include <stdio.h>

void main(void)
{
    // Input
    int intNum[5] = { 333, 212, 44, 155, 112 };
    int i, j;
    int rankArray[5];
    int rank = 0;//����� ������ ����
    // Process
    for (i = 0; i < 5; i++) {
        rank = 1; // ������ ������ ������ 1��
        for (j = 0; j < 5; j++) {
            if (intNum[i] < intNum[j]) {
                rank++;// ������ ū ������ ������ ��������
            }
            rankArray[i] = rank; // ���� ���
        }
    }
    // Output
    printf("   ����  ���\n");
    for (i = 0; i < 5; i++) {
        printf(
            "%7d %7d\n", intNum[i], rankArray[i]);
    }
}
