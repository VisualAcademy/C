#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int r = 0;
    int iRandom = 0; // 1(����), 2(����), 3(��)
    int iSelection = 0; // ����� �Է�(1~3)
    const char* choice[] = { "����", "����", "��" };

    // ��ǻ���� ������ ����
    srand(time(0));
    iRandom = (rand() % 3) + 1;

    printf("1(����), 2(����), 3(��) �Է�: _\b");
    r = scanf("%d", &iSelection);

    if (iSelection >= 1 && iSelection <= 3)
    {
        printf("\n �����: %s", choice[iSelection - 1]);
        printf("\n ��ǻ��: %s\n\n", choice[iRandom - 1]);

        // ��� ���
        if (iSelection == iRandom)
        {
            printf("���");
        }
        else
        {
            switch (iSelection)
            {
            case 1: printf(iRandom == 3 ? "��" : "��"); break;
            case 2: printf(iRandom == 1 ? "��" : "��"); break;
            case 3: printf(iRandom == 2 ? "��" : "��"); break;
            }
        }
        printf("\n");
    }
}
