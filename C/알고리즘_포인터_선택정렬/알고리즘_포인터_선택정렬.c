#include <stdio.h>

void SelectionSort(int* p)
{
    int i, j, temp;
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

void main(void)
{
    //[1] Input
    int intNum[5] = { 3, 2, 1, 5, 4 };
    int i;
    //[2] Process : 정렬알고리즘 : 선택,버블,퀵,...
    SelectionSort(intNum);
    /*
    for (i = 0; i < 5-1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (intNum[i] > intNum[j]) {
                temp = intNum[i];
                intNum[i] = intNum[j];
                intNum[j] = temp;
            }
        }
    }
    */
    //[3] Output
    for (i = 0; i < 5; i++) {
        printf("%d\n", intNum[i]);
    }
}
