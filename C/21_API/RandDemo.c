// ���� �Լ� : ������ ���(���ǰ� ���)
#include <stdio.h> // printf(), scanf(), ...
#include <stdlib.h> // rand(), ...
#include <time.h> // time()

int main()
{
    int i = 0;
    int r = 0;
    int l = 0;

    //[1] ���� �ʱⰪ ����
    srand((unsigned)time(0));

    //[!] �ζ� ��ȣ ������: 1~45������ ���� 5�� �����ϰ� ���
    for (i = 0; i < 5; i++)
    {
        // rand() �Լ��� 0 ~ 32767 �� �ϳ��� ���
        l = rand() % 45 + 1; // rand() % 45 => 0~44���� �� �ϳ��� ����
        printf("%d", l);
        if (i == 4)
        {
            printf("\n");
        }
        else
        {
            printf(",\t");
        }
    }

    return 0;
}
