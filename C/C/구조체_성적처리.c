/*
    8.1.4. ����. ����ü�� ����� ����ó�� ���α׷� :
    ����ü_����ó��.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü ����.
typedef struct Score {
    char name[10];  // *name : �̸�
    int kor;
    int eng;
    int tot;
    double avg;
} Score;

int main() {
    int i = 0;
    Score objScore[2];

    /*
    struct Score objScore[2] = {
         {"ȫ�浿",95,80,0,0.0},
         {"��λ�",80,100,0,0.0}
    };
    */

    // ����ü �� �迭 �ʱ�ȭ : scanf()
    for (i = 0; i < 2; i++) {
        printf("\n%d��° �̸� : ", i + 1);
        scanf("%9s", objScore[i].name);
        printf("\n�������� : ");
        scanf("%d", &objScore[i].kor);
        printf("\n�������� : ");
        scanf("%d", &objScore[i].eng);
    }

    // Process : ������ ��� ���ϱ�.
    for (i = 0; i < 2; i++) {
        // ����
        objScore[i].tot = objScore[i].kor + objScore[i].eng;
        // ���
        objScore[i].avg = objScore[i].tot / 2.0;
    }

    // Output : ��� ���
    printf("�̸�\t����\t����\t����\t���\t\n");
    for (i = 0; i < 2; i++) {
        printf("%6s %4d %4d %4d %4.1f\n",
            objScore[i].name,
            objScore[i].kor,
            objScore[i].eng,
            objScore[i].tot,
            objScore[i].avg);
    }
    return 0;
}
