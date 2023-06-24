#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Job이라는 이름의 열거형을 정의합니다.
enum Job
{
    Developer,  // 0
    Instructor, // 1
    Author      // 2
};

int main(void)
{
    // myJob이라는 변수를 Job 열거형으로 선언합니다.
    enum Job myJob;

    // 사용자에게 직업을 선택하도록 안내합니다.
    printf("직업을 선택하세요\n");
    printf("1. Developer\n");
    printf("2. Instructor\n");
    printf("3. Author\n");

    int choice;
    // 사용자로부터 입력을 받아 choice 변수에 저장합니다.
    scanf("%d", &choice);

    // 사용자의 선택에 따라 myJob 변수에 직업을 할당합니다.
    switch (choice)
    {
    case 1:
        myJob = Developer;
        break;
    case 2:
        myJob = Instructor;
        break;
    case 3:
        myJob = Author;
        break;
    default:
        // 잘못된 입력의 경우 안내 메시지를 출력하고 프로그램을 종료합니다.
        printf("잘못된 입력입니다.\n");
        return 1;
    }

    // 선택한 직업을 출력합니다.
    printf("선택한 직업: ");
    switch (myJob)
    {
    case Developer:
        printf("Developer\n");
        break;
    case Instructor:
        printf("Instructor\n");
        break;
    case Author:
        printf("Author\n");
        break;
    }

    return 0;
}
