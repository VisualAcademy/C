//[?] 무작위 데이터를 순서대로 [오름차순(ASC)|내림차순(DESC)] 정렬
// 거품(버블) 정렬 알고리즘(Bubble Sort Algorithm): 
// 가장 [작은|큰] 데이터를 오른쪽으로 순서대로 이동
#include <stdio.h>

int main(void)
{
    //[1] Input
    int data[5] = { 3, 2, 1, 5, 4 };
    int N = 5;

    //[2] Process: Bubble Sort(거품 정렬) 알고리즘: 
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 1; j < (N - i); j++)
        {
            if (data[j - 1] < data[j]) // 부등호 방향: 오름차순(>), 내림차순(<)
            {
                int temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }

    //[3] Output
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");

    return 0;
}
