/*
이진 검색 : 데이터가 정렬되어 있다고 가정
*/
#include <stdio.h>

void main() {
    int intNum[] = { 1,2,3,4,5 };
    int key = 4;//찾을 데이터
    int low, high, mid, flag = 0;
    low = 0; high = 5 - 1;
    // 이진 검색 알고리즘
    while (low <= high) {
        mid = (low + high) / 2;//중간값 구하기

        if (key == intNum[mid]) { // 키값과 중간값이 같으면 찾음.
            flag = 1; break;
        }
        if (key > intNum[mid]) { // 키값이 더 크면 low를 mid+1
            low = mid + 1;
        }
        else {                    // 키값이 작으면 high를 mid-1
            high = mid - 1;
        }
    }
    if (flag == 1) {
        printf("찾았습니다.");
    }
    else {
        printf("못찾았습니다.");
    }
}
