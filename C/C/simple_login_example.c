#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char correct_id[] = "user1234";
    char correct_password[] = "password1234";

    char input_id[50];
    char input_password[50];

    printf("아이디를 입력하세요: ");
    scanf("%s", input_id);
    printf("암호를 입력하세요: ");
    scanf("%s", input_password);

    if (strcmp(input_id, correct_id) == 0 && strcmp(input_password, correct_password) == 0)
    {
        printf("로그인 성공!\n");
    }
    else
    {
        printf("로그인 실패. 아이디 또는 암호가 올바르지 않습니다.\n");
    }

    return 0;
}