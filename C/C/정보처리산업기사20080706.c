// 근사값 : 차이값의 절대값의 최소값
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    int i;
    int GK[100] = { 0 };
    int COMP = 500; // 차이값의 최소값
    int N = 0;
    int CHA = 0;
    int FGK = 0;
    int TARGET = 77;

    srand((unsigned)time(NULL));
    for (i = 0; i < 100; i++) {
        GK[i] = rand() % 500;
        printf("%d\t", GK[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    do {
        N = N + 1;
        if (GK[N] < TARGET) {       // 차이값의 절대값
            CHA = TARGET - GK[N];
        }
        else {
            CHA = GK[N] - TARGET;
        }
        if (COMP > CHA) {
            COMP = CHA;
            FGK = GK[N];
        }
    } while (N < 100);

    printf("%d에 가까운값 : %d\n", TARGET, FGK);

    return 0;
}
