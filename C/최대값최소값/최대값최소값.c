// �ִ밪(MAX), �ּҰ�(MIN) �˰���

#include <stdio.h>

void main(void)
{
    //[1] Init
    int i = 0;
    //[1] ���� �ʱ�ȭ 
    int intMax = 0;  // �ִ밪: ���� ���� ��.
    int intMin = 100;  // �ּҰ�: ���� ū ��.
    // 5���� ���� ���� �迭
    int intNum[5] = { 21, 50, 33, 45, 7 };

    //[2] Process
    for (i = 0; i < 5; i++) {
        if (intNum[i] > intMax) {
            intMax = intNum[i];  // ū �� ����
        }
    }
    for (i = 0; i < 5; i++) {
        if (intNum[i] < intMin) {
            intMin = intNum[i];  // ���� �� ����
        }
    }

    //[3] Output
    printf("�ִ밪 : %d\n", intMax);
    printf("�ּҰ� : %d\n", intMin);
}
