/*
���� �˻� : �����Ͱ� ���ĵǾ� �ִٰ� ����
*/
#include <stdio.h>

void main() {
    int intNum[] = { 1,2,3,4,5 };
    int key = 4;//ã�� ������
    int low, high, mid, flag = 0;
    low = 0; high = 5 - 1;
    // ���� �˻� �˰���
    while (low <= high) {
        mid = (low + high) / 2;//�߰��� ���ϱ�

        if (key == intNum[mid]) { // Ű���� �߰����� ������ ã��.
            flag = 1; break;
        }
        if (key > intNum[mid]) { // Ű���� �� ũ�� low�� mid+1
            low = mid + 1;
        }
        else {                    // Ű���� ������ high�� mid-1
            high = mid - 1;
        }
    }
    if (flag == 1) {
        printf("ã�ҽ��ϴ�.");
    }
    else {
        printf("��ã�ҽ��ϴ�.");
    }
}
