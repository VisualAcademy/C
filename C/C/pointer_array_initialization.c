// 문자열 리터럴을 저장하는 포인터 배열 사용하기
#include <stdio.h>

int main(void)
{
    const char* family[] = { "아빠", "엄마", "아들", "공주" };

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", family[i]);
    }

    return 0;
}
