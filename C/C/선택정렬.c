/*
    ����(SORT) �˰��� : ��������, ��������, ������, ���, ...
        ASCENDING(��������) : �����Ϳ��� ū������..., ABC, 123, ������ �� ����
        DESCENDING(��������) : ū�Ϳ��� ����������..., CBA, 321, �ٳ��� �� ����
        �������� :
            ���������Ϳ� �񱳵����͸� ���ؼ�, ���� �����͸�
            �������� �̵�(��ȯ)
*/
#include <stdio.h>

int main(void) // ����: void main(void)���� int main(void)��
{
    //[1] Input
    int i, j, k, temp;
    int data[] = { 3, 4, 5, 1, 2 };
    int n = sizeof(data) / sizeof(int); // �迭�� ũ��
    //[2] Process : Selection Sort Algorithm : �־�������(����)�� ���� 
    for (i = 0; i < n - 1; i++)             // i�� 0���� n-1��° �ݺ�
    {
        for (j = i + 1; j < n; j++)         // j�� i+1���� n��° �ݺ�
        {
            if (data[i] > data[j])          // i�� j��° �ڷ� �񱳽� �������� ����
            {
                temp = data[i];             // SWAP() : �ڸ�����
                data[i] = data[j];
                data[j] = temp;
            }
        }
        printf("%d ȸ���� ���� �� : ", i + 1);
        for (k = 0; k < n; k++) {
            printf("%d\t", data[k]);
        }
        printf("\n");
    }
    //[3] Output
    for (i = 0; i < n; i++) {
        printf("%d\n", data[i]);
    }

    return 0; // �߰�: ���� ����� 0 ��ȯ
}
/*
[����] �Ʒ��� ���� 5���� �����͸� �迭�� �־� ���� ��,
���� �ͺ��� ū �� ������� �����Ͽ� ����Ͻÿ�.
int data[] = {3, 4, 5, 1, 2};
[���]
1, 2, 3, 4, 5

*/
