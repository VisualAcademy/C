#include <stdio.h>
#include <math.h> // abs()
#include <limits.h> 

void main(void)
{
    // Input 
    int intData[] = { 33,23,22,34,36 };//����
    int intTargetData = 30;//Ÿ��
    int intNear = 0; // �ٻ簪
    int i = 0; // �ݺ���
    int intDiff[5] = { 0, }; // ���̰� ����
    int intAbs[5] = { 0, }; // ���밪 ����
    int intMin = INT_MAX; // �ּҰ� ���� ����
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", intData[i]);
    }printf("\n");
    // Process
    //[a] ���̰�
    for (i = 0; i < 5; i++) {
        intDiff[i] = intData[i] - intTargetData;
        printf("%d\t", intDiff[i]);
    }printf("\n");
    //[b] ���밪
    for (i = 0; i < 5; i++) {
        intAbs[i] = abs(intDiff[i]);
        printf("%d\t", intAbs[i]);
    }printf("\n");
    //[c] �ּҰ�
    for (i = 0; i < 5; i++) {
        if (intAbs[i] < intMin) {
            intMin = intAbs[i];
            //[d]������ ���밪�� �ּҰ��� ���� ������
            intNear = intData[i];
        }
    }
    // Output
    printf("%d�� ���� ���� : %d\n"
        , intTargetData, intNear);
}
