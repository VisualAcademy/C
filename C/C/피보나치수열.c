// �Ǻ���ġ ������ n��° �ݺ������� �� :
// ���� ���, 7�� �ݺ� : 1 + 1 + 2 + 3 + 5 + 8 + 13 = 33
#include <stdio.h>

int main(void)
{
    //[1] Input
    int prev = 0; // ��
    int next = 1; // ��
    int sum = prev + next; // ��ü��
    int i = 1; // �ε��� : 1��°����...
    int n = 20; // ���� : <- �� ���� ���� n��° �ݺ������� ���� ����
    int temp = 0; // �Ұ�

    //[2] Process
    for (i = 1; i < n; i++)
    {
        temp = prev + next;
        sum += temp;
        prev = next; // ���� �ڷḦ ���� �ڷ�� �缳��
        next = temp;
    }

    //[3] Output
    printf("%d\n", sum);

    return 0;
}
