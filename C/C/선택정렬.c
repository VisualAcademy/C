/*
    정렬(SORT) 알고리즘 : 선택정렬, 버블정렬, 퀵정렬, 기수, ...
        ASCENDING(오름차순) : 작은것에서 큰것으로..., ABC, 123, 가나다 순 정렬
        DESCENDING(내림차순) : 큰것에서 작은것으로..., CBA, 321, 다나가 순 정렬
        선택정렬 :
            원본데이터와 비교데이터를 비교해서, 작은 데이터를
            왼쪽으로 이동(교환)
*/
#include <stdio.h>

int main(void) // 변경: void main(void)에서 int main(void)로
{
    //[1] Input
    int i, j, k, temp;
    int data[] = { 3, 4, 5, 1, 2 };
    int n = sizeof(data) / sizeof(int); // 배열의 크기
    //[2] Process : Selection Sort Algorithm : 주어진범위(패턴)와 조건 
    for (i = 0; i < n - 1; i++)             // i는 0부터 n-1번째 반복
    {
        for (j = i + 1; j < n; j++)         // j는 i+1부터 n번째 반복
        {
            if (data[i] > data[j])          // i와 j번째 자료 비교시 작은것을 왼쪽
            {
                temp = data[i];             // SWAP() : 자리변경
                data[i] = data[j];
                data[j] = temp;
            }
        }
        printf("%d 회전이 끝난 후 : ", i + 1);
        for (k = 0; k < n; k++) {
            printf("%d\t", data[k]);
        }
        printf("\n");
    }
    //[3] Output
    for (i = 0; i < n; i++) {
        printf("%d\n", data[i]);
    }

    return 0; // 추가: 정상 종료시 0 반환
}
/*
[과제] 아래와 같이 5개의 데이터를 배열에 넣어 놓은 후,
작은 것부터 큰 것 순서대로 정렬하여 출력하시오.
int data[] = {3, 4, 5, 1, 2};
[출력]
1, 2, 3, 4, 5

*/
