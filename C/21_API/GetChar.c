// getchar_demo.c
// getchar() 함수: 키보드로부터 하나의 문자 입력
#include <stdio.h> // getchar()

int main()
{
    char blood_type;

    printf("당신의 혈액형은? _\b");
    blood_type = getchar();

    printf("%c형입니다.\n", blood_type);

    return 0;
}
