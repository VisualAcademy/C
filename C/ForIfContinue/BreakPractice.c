// 1���� 10���� ����� �� ����ڷκ��� �Է¹��� �������� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
    printf("1���� 10���� �ϳ��� �Է��ϼ���: ");
    int number;
    scanf_s("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == number)
        {
            break; // �ݺ��� Ż��
        }
    }
}
