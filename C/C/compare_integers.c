#include <stdio.h> 

// 비교 함수
// 두 개의 void 포인터를 매개변수로 받아 int형으로 캐스팅하여 비교합니다.
// a가 b보다 크면 양수, a와 b가 같으면 0, a가 b보다 작으면 음수를 반환합니다.
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(void) 
{
    int x = 5;
    int y = 10;

    // compare 함수를 이용하여 x와 y를 비교하고 그 결과를 comparison에 저장합니다.
    int comparison = compare(&x, &y);

    if (comparison < 0) 
    {
        printf("x는 y보다 작습니다.\n");  // comparison이 음수이면 x가 y보다 작습니다.
    }
    else if (comparison > 0) 
    {
        printf("x는 y보다 큽니다.\n");  // comparison이 양수이면 x가 y보다 큽니다.
    }
    else 
    {
        printf("x와 y는 같습니다.\n");  // comparison이 0이면 x와 y는 같습니다.
    }

    return 0;
}
