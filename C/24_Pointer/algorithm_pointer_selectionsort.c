#include <stdio.h>

// 포인터를 사용한 선택 정렬 함수
void SelectionSort(int* p)
{
    int temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main(void)
{
    //[1] Input
    int intNum[5] = { 3, 2, 1, 5, 4 };
    int temp;

    //[2] Process: 정렬알고리즘(선택, 버블, 퀵, ...)
    SelectionSort(intNum);
    //for (int i = 0; i < 5 - 1; i++)
    //{
    //    for (int j = i + 1; j < 5; j++)
    //    {
    //        if (intNum[i] > intNum[j])
    //        {
    //            temp = intNum[i];
    //            intNum[i] = intNum[j];
    //            intNum[j] = temp;
    //        }
    //    }
    //}

    //[3] Output
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", intNum[i]);
    }

    return 0;
}
