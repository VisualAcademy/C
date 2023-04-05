#include <stdio.h>
#include <limits.h>

// MyMin() �Լ� ����
void MyMin(int* min, int data[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (data[i] < *min)
        {
            *min = data[i]; // ���� �����ͷ� �� �ʱ�ȭ
        }
    }
}

int main(void)
{
    //[1] Init
    int min = INT_MAX; // �����ʹ� ���ο��� ����
    //[2] Input
    int data[5] = { -10, -30, -20, -5, -15 };
    int n = sizeof(data) / sizeof(int);
    //[3] Process : �ּڰ��� ���ض�!!!
    MyMin(&min, data, n);
    //[4] Output
    printf("�ּڰ� : %d\n", min); // -30

    return 0;
}
