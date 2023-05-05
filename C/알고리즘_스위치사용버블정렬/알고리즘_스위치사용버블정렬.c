/*
	5개의 수를 입력시킨 후 스위치를 사용한 버블 정렬(Bubble Sort)을 이용
	오름차순 정렬하는 프로그램
*/
#include <stdio.h>

int main(void)
{
    // 정렬할 정수 배열을 초기화합니다.
    int intNum[] = { 33, 21, 17, 5, 40 };
    int i, j, temp;
    int intSwitch;

    // 초기 데이터 출력
    printf("초기 데이터 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", intNum[i]);
    }
    printf("\n");

    // 버블 정렬을 사용하여 배열을 오름차순으로 정렬합니다.
    for (i = 0; i < 5 - 1; i++)
    {
        // 스위치 변수를 0으로 초기화합니다.
        intSwitch = 0;

        // 현재 요소와 다음 요소를 비교하여 필요한 경우 교환합니다.
        for (j = 0; j < 5 - 1 - i; j++)
        {
            if (intNum[j] > intNum[j + 1])
            {
                // 요소 교환
                temp = intNum[j];
                intNum[j] = intNum[j + 1];
                intNum[j + 1] = temp;

                // 스위치 변수를 1로 설정하여 교환 발생을 나타냅니다.
                intSwitch = 1;
            }
        }

        // 스위치 변수가 0이면 교환되지 않은 것으로 간주하고 정렬을 종료합니다.
        if (intSwitch == 0)
        {
            break;
        }
    }

    // 정렬된 데이터 출력
    printf("정렬된 데이터 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", intNum[i]);
    }
    printf("\n");

    return 0;
}
