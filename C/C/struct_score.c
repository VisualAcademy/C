#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü ����.
typedef struct Score
{
    char name[10];  // *name : �̸�
    int kor;
    int eng;
    int tot;
    double avg;
} Score;

int main(void)
{
    int i = 0;
    Score score[2];

    // ����ü �� �迭 �ʱ�ȭ: scanf()
    for (i = 0; i < 2; i++)
    {
        printf("%d��° �̸�: ", i + 1);
        scanf("%9s", score[i].name);
        printf("��������: ");
        scanf("%d", &score[i].kor);
        printf("��������: ");
        scanf("%d", &score[i].eng);
    }

    // Process : ������ ��� ���ϱ�.
    for (i = 0; i < 2; i++)
    {
        // ����
        score[i].tot = score[i].kor + score[i].eng;
        // ���
        score[i].avg = score[i].tot / 2.0;
    }

    // Output : ��� ���
    printf("\n �̸�  ����  ����  ����  ���\n");
    for (i = 0; i < 2; i++)
    {
        printf("%5s %5d %5d %5d %5.1f\n",
            score[i].name,
            score[i].kor,
            score[i].eng,
            score[i].tot,
            score[i].avg);
    }

    return 0;
}
