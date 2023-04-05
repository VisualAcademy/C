#include <stdio.h>
#include <limits.h>

// MyMin() 함수 설계
void MyMin(int* min, int data[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (data[i] < *min)
        {
            *min = data[i]; // 작은 데이터로 재 초기화
        }
    }
}

int main(void)
{
    //[1] Init
    int min = INT_MAX; // 데이터는 메인에서 관리
    //[2] Input
    int data[5] = { -10, -30, -20, -5, -15 };
    int n = sizeof(data) / sizeof(int);
    //[3] Process : 최솟값만 구해라!!!
    MyMin(&min, data, n);
    //[4] Output
    printf("최솟값 : %d\n", min); // -30

    return 0;
}
