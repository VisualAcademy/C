//정렬(Sort)
//오름차순(Asc) : 1, 2, 3 순
//내림차순(Desc) : c, b, a 순
#include <stdio.h>

int main(void) {
    int i, j, temp;
    int intNum[5] = { 21, 33, 45, 17, 9 };
    //process
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (intNum[i] > intNum[j]) {
                temp = intNum[i];
                intNum[i] = intNum[j];
                intNum[j] = temp;
            }
        }
    }
    //output
    for (i = 0; i < 5; i++) {
        printf("%d ", intNum[i]);//9~45
    }

    return 0;
}
