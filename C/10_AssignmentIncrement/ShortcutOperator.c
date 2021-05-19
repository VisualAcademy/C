//[?] 대입 연산자 축약형 사용하기  
#include <stdio.h>

main()
{
    int x = 3;
    int y = 3;

    x = x + 2;  // 기본형
    y += 2;     // 축약형 

    printf("x: %d, y: %d\n", x, y); 
}
