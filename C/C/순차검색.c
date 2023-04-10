// 검색(SEARCH) : 주어진 범위내에서 주어진 내용 검색
// 순차검색(Sequential Search) : 모든 데이터를 순서대로 검색 
#include <stdio.h>
#include <stdbool.h> // 변경: bool 타입을 위해 stdbool.h 헤더 추가
// #define true 1 삭제
// #define false 0 삭제
// typedef int bool; 삭제

int main(void) { // 변경: void main(void)에서 int main(void)로
    //[1] 
    int i = 0;
    int data[] = { 1, 3, 5, 7, 9, 11 };
    int search = 0;
    int n = sizeof(data) / sizeof(data[0]);
    bool flag = false; // 참 또는 거짓을 담아놓을 그릇
    printf("검색할 정수(1~20) : __\b\b");
    scanf("%d", &search);
    //[2] SEARCH 알고리즘 : 순차검색 : FULL SCAN
    for (i = 0; i < n; i++) {
        if (search == data[i]) {
            flag = true; // 참 : 같은 데이터 있다면, 
        }
    }
    //[3]
    if (flag == true) {
        printf("%d를 찾았습니다.\n", search);
    }
    else {
        printf("%d를 못 찾았습니다.\n", search);
    }

    return 0; // 추가: 정상 종료시 0 반환
}
