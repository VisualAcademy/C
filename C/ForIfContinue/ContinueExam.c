// continue ���� ����Ͽ� 1���� 100���� ���� �� 7�� ����� ������ ������ �հ踦 ���ϴ� ���α׷� 
#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        // 7�� ��� ����
        if (i % 7 == 0)
        {
            continue;
        }
        sum += i;
    }
    printf("%d\n", sum); // 4315
}
