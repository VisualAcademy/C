#include <stdio.h>

// 'update_value' 함수는 정수형 포인터를 매개변수로 받아 해당 주소의 값을 변경합니다.
void update_value(int* value)
{
    *value += 5; // 전달받은 포인터가 가리키는 주소에 저장된 값을 5 증가시킵니다.
}

int main(void)
{
    int number = 20; // 'number' 변수를 선언하고 초기 값으로 20을 할당합니다.

    printf("update_value 함수 호출 전: %d\n", number); // 'number'의 초기 값 출력

    update_value(&number); // 'update_value' 함수를 호출하면서 'number'의 주소를 인자로 전달합니다.
    // 이렇게 하면 함수 내에서 직접 'number'의 값을 변경할 수 있습니다.

    printf("update_value 함수 호출 후: %d\n", number); // 변경된 'number' 값 출력

    return 0; 
}
