#include <stdio.h>

void main(void)
{
    // Init
    int MAX; // �ִ밪
    int MIN; // �ּҰ�
    int S; // �հ�
    int AVE; // ���
    int I; // ī��Ʈ

    // Input
    int A[7] = { 30,24,71,41,43,86,70 };
    S = 0; I = 0; MAX = 0; MIN = 100; AVE = 0;

    // Process
    for (I = 0; I < 7; I++) {
        S += A[I];// [1]SUM
        if (A[I] > MAX) { // [2]Max
            MAX = A[I];
        }
        if (A[I] < MIN) { // [3]MIN
            MIN = A[I];
        }
    }
    AVE = S / (I - 1); // [4]AVG

    // Output
    printf("�հ� : %d, �ִ밪 : %d, "
        "�ּҰ� : %d, ��� : %d\n"
        , S, MAX, MIN, AVE);
}
