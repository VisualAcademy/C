#include <stdio.h>

int main(void) {
    int n = 5;                        // ���� ���� ���
    int arr[] = { 5, 5, 5, 5, 55 };   // ���� �ð�(��)
    int sum = 0;                      // ���� ��� �հ�
    int p = 0;                        // �ε��� �ݺ�
    do {
        int tmp = arr[p];
        int fare = 0;        // ��� ���
        if (tmp >= 10) {
            fare = 500;
            if (tmp >= 30) {
                tmp = tmp - 30;
                do {
                    if (tmp >= 1) {
                        fare = fare + 500;  // 500���� ��� ����
                        tmp = tmp - 10;     // 10�� ������
                    }
                } while (tmp >= 1);
            }
        }
        if (fare > 25000) {
            fare = 25000; // 1�� �ִ� ���: 25,000�� 
        }
        sum = sum + fare; // ��� ����
        p = p + 1; // �ε��� ���� 
    } while (p < n);
    printf("���� ��� �հ�: %d\n", sum);
}
