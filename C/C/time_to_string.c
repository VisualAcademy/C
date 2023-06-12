#define _CRT_SECURE_NO_WARNINGS 
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    time_t current_time;  // time_t 타입의 현재 시간 저장 변수
    char* c_time_string;  // 문자열 형태의 시간 저장 변수

    current_time = time(NULL);  // 현재 시간 가져오기
    c_time_string = ctime(&current_time);  // 현재 시간을 문자열로 변환

    // ctime() 함수는 이미 줄 바꿈 문자를 추가했으므로, 줄 바꿈 문자를 추가하지 않아도 됩니다.
    printf("%s", c_time_string);  // 출력

    return 0;
}
