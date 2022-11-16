//[?] getchar() 매크로: 표준 입력(stdin)에서 문자 하나를 입력
#include <stdio.h>

int main(void)
{
    int anykey;

    printf("키보드에서 아무키나 누르고 엔터치세요.\n");
    anykey = getchar();
    printf("입력한 값은 %c입니다.\n", anykey);

    return 0;
}
