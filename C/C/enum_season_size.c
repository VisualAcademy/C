#include <stdio.h>

// Season ������ ���� (SPRING=0, SUMMER=1, AUTUMN=2, WINTER=3)
enum Season
{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

int main(void)
{
    enum Season season = SPRING; // season ������ SPRING ������ �ʱ�ȭ

    // season ������ ũ�⸦ ����Ʈ ������ ���
    printf("������ ũ��: %zu ����Ʈ\n", sizeof(season));

    return 0;
}
