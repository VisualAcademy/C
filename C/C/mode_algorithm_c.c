/*
최빈값(MODE) : 해당 범위의 데이터에서 가장 많이 나온 값
    - 조건 : 점수와 같이 0부터 100점까지의 범위로 한정
    - 최댓값 알고리즘의 확장
    - 범위를 인덱스로 처리
    => 인덱스의 카운트(COUNT)의 최댓값(MAX)
*/
#include <stdio.h>

int main(void)
{
    //[1] Input: 자료구조
    int data[10] = { 1, 2, 5, 4, 5, 3, 3, 5, 5, 8 }; // 인위적으로 5를 여러 개
    int count[10 + 1] = { 0, }; // N + 1개
    int mode = 0; // 최빈값
    int max = 0; // INT_MIN
    int i;

    //[2] Process: 알고리즘: 최빈값
    //[A] 데이터의 인덱스의 카운트 알고리즘 적용
    for (i = 0; i < 10; i++) {
        count[data[i]]++; // 데이터를 인덱스로 보자... 그것의 카운트 증가 
    }
    //[B] 최댓값 알고리즘 적용
    for (i = 0; i <= 10; i++) {
        if (max < count[i]) {
            max = count[i]; // MAX 알고리즘
            mode = i;
        }
    }

    //[3] Output: 콘솔, 윈도우, 웹, 장치
    printf("최빈값: %d, %d번 나타남\n", mode, max); // 5가 4번 나타남

    return 0;
}
