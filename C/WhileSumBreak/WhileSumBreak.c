// 1���� 10���� ������ ���� ���س��� �� ���� 22 �̻��� �Ǹ� ���ߴ� ���α׷�
#include <stdio.h>

main()
{
    int goal = 22;
    int sum = 0;

    int i = 1;
    while (i <= 10)
    {
        sum += i;

        if (sum >= goal)
        {
            break; // �ݺ��� Ż��
        }

        i++;
    }

    printf("1���� %d������ ���� %d�̰�, ��ǥġ %d�̻��� �޼��߽��ϴ�.\n", i, sum, goal);
}
