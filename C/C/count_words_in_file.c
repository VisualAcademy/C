#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h> // 표준 입출력 함수를 사용하기 위한 라이브러리
#include <ctype.h> // 문자 분류 함수를 사용하기 위한 라이브러리
#include <stdbool.h> // 불리언 타입을 사용하기 위한 라이브러리

int main(void)
{
    FILE* file = fopen("example.txt", "r"); // example.txt 파일을 읽기 모드(r)로 열기
    if (file == NULL) // 파일 열기에 실패한 경우
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    int word_count = 0; // 단어 수를 저장할 변수
    bool is_word = false; // 단어 내부인지 여부를 저장할 변수
    int ch; // 파일에서 읽은 문자를 저장할 변수
    while ((ch = fgetc(file)) != EOF) // 파일의 끝에 도달할 때까지 문자를 읽음
    {
        if (isspace(ch)) // 공백 문자인 경우
        {
            if (is_word) // 단어 내부에서 공백 문자를 만난 경우
            {
                word_count++; // 단어 수를 증가시킴
                is_word = false; // 단어 내부가 아닌 것으로 표시
            }
        }
        else // 공백 문자가 아닌 경우
        {
            is_word = true; // 단어 내부인 것으로 표시
        }
    }

    if (is_word) // 파일의 끝에 도달했을 때 단어 내부인 경우
    {
        word_count++; // 단어 수를 증가시킴
    }

    printf("파일에 있는 단어 수: %d\n", word_count); // 단어 수를 출력

    fclose(file); // 파일 닫기

    return 0;
}
