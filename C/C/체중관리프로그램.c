#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

// [0] ����ü ����
struct Record {
    int Class;      // ��
    int Num;        // ��ȣ
    float Weight;   // ������
};

int main(void) {
    // [1] Init
    int i = 0;           // ����
    int count = 0;        // ī��Ʈ üũ
    int classNum = 1;     // 1~9�� ó��
    float avg = 0;        // ������/�����
    int tot = 0;          // ��ü����
    float avgTotal = 0;   // ��ü���
    struct Record objRecord[N]; // ����ü
    // [2] Input
    for (i = 0; i < N; i++) {
        printf("\n�� : _\b");
        scanf("%d", &objRecord[i].Class);
        printf("\n��ȣ : _\b");
        scanf("%d", &objRecord[i].Num);
        printf("\n������ : _\b");
        scanf("%f", &objRecord[i].Weight);
    }
    // [3] Process
    for (i = 0; i < N; i++) {
        // [i] �ݺ� ��� : 1~9��
        // [ii] ��ü ����
        tot += objRecord[i].Weight;
    }
    // [iii] ��ü ���
    avgTotal = tot / N;
    printf("\n");
    // [4] Output
    printf("�� ��ȣ ������\n");
    for (classNum = 1; classNum <= 9; classNum++) {
        for (i = 0; i < N; i++) {
            if (objRecord[i].Class == classNum) {
                printf("%d %d %.1f\n"
                    , objRecord[i].Class
                    , objRecord[i].Num
                    , objRecord[i].Weight
                );
                avg += objRecord[i].Weight;
                count++;
            }
        }
        for (i = 0; i < N; i++) {
            if (objRecord[i].Class == classNum) {
                printf("%d�� ��� : %.1f\n"
                    , classNum, (avg / count));
                break;
            }
        }
        avg = 0;
        count = 0;
    }
    // [!] ��ü���
    printf("��ü��� : %.1f\n", avgTotal);

    return 0;
}
