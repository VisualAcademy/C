#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char title[50];
    char author[50];
    int pages;
};

int main(void)
{
    struct Book* book;
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    /* 동적 할당 */
    book = (struct Book*)malloc(n * sizeof(struct Book));
    if (book == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    /* 구조체에 정보 입력 */
    for (i = 0; i < n; ++i)
    {
        printf("Enter the title, author, and pages of book %d: ", i + 1);
        scanf("%s", (book + i)->title);
        scanf("%s", (book + i)->author);
        scanf("%d", &(book + i)->pages);
    }

    printf("Displaying Information:\n");

    /* 구조체 정보 출력 */
    for (i = 0; i < n; ++i)
        printf("Title: %s  Author: %s  Pages: %d\n", (book + i)->title, (book + i)->author, (book + i)->pages);

    return 0;
}
