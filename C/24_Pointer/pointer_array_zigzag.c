// 배열의 배열
#include <stdio.h>

int main(void)
{
    char* arr[3]; // 기본: 문자 3개 저장, 포인터 배열: 문자열 3개를 저장해 놓을 그릇

    arr[0] = "C언어";
    arr[1] = "C++";
    arr[2] = "C#";

    for (int i = 0; i < 3; i++)
    {
        printf("%s \n", arr[i]);
    }

    return 0;
}
