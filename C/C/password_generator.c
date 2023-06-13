#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LENGTH 10 // 비밀번호 길이를 10으로 정의

int main(void)
{
    char password[PASS_LENGTH + 1]; // 비밀번호를 저장할 배열, 널 문자를 위해 +1
    int i;

    srand(time(NULL)); // 랜덤 시드를 현재 시간으로 설정

    for (i = 0; i < PASS_LENGTH; i++)
    {
        password[i] = 'a' + rand() % 26; // 랜덤한 소문자를 비밀번호에 저장
    }

    password[i] = '\0'; // 문자열의 끝에 널 문자 추가

    printf("생성된 비밀번호: %s\n", password); // 생성된 비밀번호 출력

    return 0;
}
