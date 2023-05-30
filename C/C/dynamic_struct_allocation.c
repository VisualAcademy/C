#define _CRT_SECURE_NO_WARNINGS  // 보안 경고 무시 설정 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 정의 및 별칭 설정
typedef struct
{
    int age;
    char name[20];
} Person;

int main(void)
{
    Person* ptr;
    int i, n;

    printf("사람의 수를 입력하세요: ");
    scanf("%d", &n);

    // 메모리 동적 할당
    ptr = (Person*)malloc(n * sizeof(Person));
    if (ptr == NULL)
    {
        printf("에러! 메모리가 할당되지 않았습니다.");
        exit(0);
    }

    // 구조체에 정보 입력
    for (i = 0; i < n; ++i)
    {
        printf("사람 %d의 나이와 이름을 입력하세요: ", i + 1);
        scanf("%d %s", &(ptr + i)->age, (ptr + i)->name);
    }

    printf("입력한 정보는 다음과 같습니다:\n");

    // 구조체 정보 출력
    for (i = 0; i < n; ++i)
    {
        printf("나이: %d  이름: %s\n", (ptr + i)->age, (ptr + i)->name);
    }

    // 동적으로 할당된 메모리 해제
    free(ptr);

    return 0;
}
