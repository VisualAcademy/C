//1/2 - 2/3 + 3/4 - 4/5 +.........+ 99/100
#include <stdio.h>

int main(void)
{
    // ���� ������ ���� �ʱ�ȭ�մϴ�.
    double sum = 0.0;

    // 1���� 99������ ������ �ݺ��մϴ�.
    int i;
    for (i = 1; i <= 99; i++)
    {
        // �м� ���� ����մϴ�.
        double fraction = i / (double)(i + 1);

        // Ȧ�� �ε����� ��� �հ迡 ���ϰ�, ¦�� �ε����� ��� �հ迡�� ���ϴ�.
        if (i % 2 == 1)
        {
            sum += fraction;
        }
        else
        {
            sum -= fraction;
        }
    }

    // ����� ����մϴ�. (��: 0.69)
    printf("���: %.2f\n", sum);

    return 0;
}
