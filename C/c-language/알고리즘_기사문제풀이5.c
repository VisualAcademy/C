//S=1-2+4-7+11-16+22�� ���� ������ ��
#include <stdio.h>

int main(void) {
    // Input 
    int sum = 0; // ��ü ������ ��
    int index = 0; // �ε��� ����
    int current = 1; // 1���� ����
    // Process
    for (index = 0; index < 7; index++) {
        current += index; // �ε��� + �� ������
        if (index % 2 == 0) { // Ȧ��(N-1)
            sum += current;
        }
        else {
            sum += -current;
        }
    }
    // Output
    printf("������ �� : %d\n", sum);
}
