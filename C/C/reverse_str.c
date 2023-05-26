#include <stdio.h>
#include <string.h>

int main(void)
{
    // 입력 받을 문자열을 저장할 변수 선언
    char str[100];

    // 사용자에게 문자열을 입력 받음
    printf("문자열을 입력하세요: ");
    fgets(str, 100, stdin); // fgets 함수를 사용하여 최대 100개의 문자를 입력 받음

    // 입력 받은 문자열의 길이를 구함
    int length = strlen(str);

    // 문자열의 첫 문자와 마지막 문자, 두 번째 문자와 마지막에서 두 번째 문자 등을 교환하여 문자열을 뒤집음
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i]; // 임시 변수에 현재 문자를 저장
        str[i] = str[length - i - 1]; // 현재 위치의 문자를 대응되는 문자로 교체
        str[length - i - 1] = temp; // 대응되는 위치의 문자를 임시 변수에 저장한 문자로 교체
    }

    // 뒤집힌 문자열 출력
    printf("뒤집힌 문자열: %s\n", str);

    return 0;
}
