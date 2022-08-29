#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int count = 0; // 높이 개수 
    int blank = 0; // 공백 개수 
    int block = 0; // 별표 개수 
    int height = 0; // 높이 번호

    printf("다이아몬드 삼각형 높이 개수 입력: ");
    scanf("%d", &count);

    // 삼각형 출력 그룹
    for (int i = 0; i < count; i++)
    {
        height = i + 1; // 높이 번호 계산 
        blank = count - height; // 출력할 공백 개수 계산  
        block = 2 * i + 1; // 출력할 별표 개수 계산

        // 공백 출력
        for (int j = 0; j < blank; j++)
        {
            printf(" ");
        }

        // 별표 출력
        for (int k = 0; k < block; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    // 역삼각형 출력 그룹: i = 1로 설정 주의 
    for (int i = 1; i < count; i++) // i 반복: 입력된 높이 개수만큼 반복
    {
        height = i + 1; // 높이 번호 계산(반복문에서 변수 i를 1부터 시작하면 필요없음)
        block = (count * 2) - (height * 2 - 1); // 출력할 별표 개수 계산

        // 공백 출력: (j < i) 조건에 따라서 공백 개수가 0, 1, 2로 증가
        for (int j = 0; j < i; j++) // j 반복
        {
            printf(" ");
        }

        // 별표 출력: 별표 개수는 (count * 2) - (height * 2 - 1) => (..., 5, 3, 1)
        for (int j = 0; j < block; j++) // k 반복: 별표 개수만큼 반복
        {
            printf("*");
        }

        printf("\n"); // 높이 줄바꿈
    }

    return 0;
}
