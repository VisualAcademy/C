#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num[3]; // 세 개의 데이터를 저장할 배열
    int sum = 0; // 합계를 저장할 변수

    for (int i = 0; i < 3; i++)
    {
        printf("입력 #%d: ", i + 1);
        scanf("%d", &num[i]); // 사용자로부터 데이터 입력받음
        sum += num[i]; // 입력된 데이터를 누적하여 합계 계산
    }

    printf("합계: %d\n", sum); // 합계 출력

    return 0;
}

//입력 #1: 3
//입력 #2: 2
//입력 #3: 1
//합계 : 6
