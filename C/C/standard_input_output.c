#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    // 표준 입력(stdin)으로부터 이름과 나이를 입력 받습니다.
    printf("이름을 입력하세요: ");
    fscanf(stdin, "%s", name);
    printf("나이를 입력하세요: ");
    fscanf(stdin, "%d", &age);

    // 표준 출력(stdout)에 이름과 나이를 출력합니다.
    fprintf(stdout, "당신의 이름은 %s이고, 나이는 %d살 입니다.\n", name, age);

    return 0;
}
