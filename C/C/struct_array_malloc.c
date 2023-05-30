#define _CRT_SECURE_NO_WARNINGS // 경고 무시
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  // 책 구조체 정의
{
    char title[50];
    char author[50];
    int pages;
} Book;

int main(void)
{
    Book* book;  // 책 포인터
    int n, i;

    printf("책의 개수를 입력하세요: ");
    scanf("%d", &n);  // 책 개수 입력

    // 메모리 할당
    book = (Book*)malloc(n * sizeof(Book));
    if (book == NULL)  // 메모리 할당 확인
    {
        printf("오류! 메모리가 할당되지 않았습니다.");
        exit(0);
    }

    // 책 정보 입력
    for (i = 0; i < n; ++i)
    {
        printf("책 %d의 제목, 저자, 페이지 수를 입력하세요 (예: 코딩 레드 300): ", i + 1);
        scanf("%s %s %d", (book + i)->title, (book + i)->author, &(book + i)->pages);
    }

    printf("정보 표시:\n");

    // 책 정보 출력
    for (i = 0; i < n; ++i)
        printf("제목: %s  저자: %s  페이지 수: %d\n", (book + i)->title, (book + i)->author, (book + i)->pages);

    free(book);  // 메모리 해제

    return 0;
}
