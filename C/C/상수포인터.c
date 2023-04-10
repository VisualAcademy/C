// 상수포인터 : 포인터 선언시 const를 붙이는 위치에 따른 비교
#include <stdio.h>

int main(void)
{
    // 원본 데이러
    int data[] = { 1, 2, 3, 4, 5 };
    // 포인터 참조
    int* p = &data[2];                  //[1] 지금껏 사용했던 모양
    const int* p1 = &data[2];           //[2] 항상 int형인 상수 : 기준
    int* const p2 = &data[2];           //[3] 항상 동일한 주소(상수)   
    const int* const p3 = &data[2];     //[4] 동일한 주소에 상수

    // 연산 및 출력
    p++;                       
    *(p + 0) = 10;              // OK : 포인터 할당 가능
    printf("%d\n", *p);         // 10 

    p1--;                      
    //*(p1 + 0) = 10;           // Error : 상수이기에 값변경 불가
    printf("%d\n", *p1);        // 2

    //*p2++;                    // Error : 주소 고정        
    *(p2 + 0) = 10;             // OK : 고정된 주소의 값 변경 가능
    printf("%d\n", *p2);        // 10

    //*p3++;                    // Error
    //*(p3 + 0) = 10;           // Error
    printf("%d\n", *p3);        // 10

    return 0; // 추가: 정상 종료시 0 반환
}
