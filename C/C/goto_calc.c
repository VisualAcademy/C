//[?] 두 수 a, b를 입력받아, 
// a > b면 a - b를 출력
// a < b면 a + b를 출력
// a == b면 프로그램 종료
// 단, goto 문 사용
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int result = 0;
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        goto subtraction;
    }
    else if (a < b)
    {
        goto addition;
    }
    else // a == b
    {
        goto exit;
    }

addition:
    result = a + b; // 덧셈
    goto print;

subtraction:
    result = a - b; // 뺄셈
    goto print;

print:
    printf("%d\n", result); // 출력

exit:
    printf("exit\n"); // 종료

    return 0;
}
