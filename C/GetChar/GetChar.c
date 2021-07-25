// getchar() 함수: 키보드로부터 하나의 문자 입력
#include <stdio.h> // getchar()

int main()
{
    char bloodType;

    printf("당신의 혈액형은? _\b");
    bloodType = getchar();
    printf("%c형입니다.\n", bloodType);

    return 0;
}
