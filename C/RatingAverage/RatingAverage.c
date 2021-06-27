/*
별점 테러 방지 프로그램

온라인 책 판매사이트의 책에 대한 평점 중에서 최솟값과 최댓값을 뺀 점수들의 평균값으로 별점을 구하는 프로그램을 작성하세요.

다음과 같이 평점 배열에 5개의 점수가 들어 있습니다.

이 중에서 가장 좋은 점수와 가장 나쁜 점수를 뺀 점수들의 평균값으로 최종 별점을 출력하는 프로그램입니다.

단, 별점은 정수 형식으로만 사용됩니다. 
*/
// <별점 테러 방지 프로그램 />
// "제품에 대한 별점 중에서 최솟값과 최댓값을 뺀 별점들의 평균값을 구하는 프로그램"
#include <stdio.h>

main()
{
    //[1] Input
    int ratings[] = { 1, 2, 3, 4, 5 };
    int rating = 0; 
    int min = ratings[0]; // 0번째 인덱스의 값으로 초기화
    int max = ratings[0]; // 0번째 인덱스의 값으로 초기화
    int sum = ratings[0]; // 0번째 인덱스의 값으로 초기화

    //[2] Process: 하나의 for 문으로 합계, 최댓값, 최솟값을 계산
    for (int i = 1; i < 5; i++) // 인덱스를 1부터 시작 주의
    {
        sum += ratings[i];

        if (ratings[i] > max)
        {
            max = ratings[i]; // 최댓값 구하기 
        }
        if (ratings[i] < min)
        {
            min = ratings[i]; // 최솟값 구하기 
        }
    }
    rating = (sum - max - min) / 3;

    //[3] Output
    printf("최댓값: %d, 최솟값: %d\n", max, min);
    printf("최종 별점: %d\n", rating);
}
