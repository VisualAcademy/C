// near_algorithm.c

// ����(NEAR) �˰��� : 
// �־���(����) �����Ϳ��� ���(Ÿ��) �����Ϳ� ���� ����� ��
// - (������ Ÿ����)���̰��� ���밪�� �ּҰ��� ���� ���� ������
#include <stdio.h>
#include <limits.h>
#include <math.h>
void main(void) {
    //[1] Input
    int i = 0; int data[] = { 21, 15, 30, 45, 27 };
    int target = 31;        // 31�� ���� ������? 
    int near = 0;           // ���� ������ ��� �׸�
    int diff = 0;           // ���̰�
    int min = INT_MAX;      // ���̰��� �ּҰ��� ����
    //[2] Process  
    for (i = 0; i < 5; i++) {
        diff = data[i] - target;    // ���̰�
        diff = abs(diff);           // ���̰��� ���밪 //(diff < 0) ? -diff: diff;
        if (min > diff) {           // �ּҰ�        
            min = diff;             // �ּҰ� �˰��� 
            near = data[i];     // ���̰��� ���밪�� �ּҰ��϶��� ������
        }
    }
    //[3] Output
    printf("%d�� ���� ���� : %d\n", target, near);
}
