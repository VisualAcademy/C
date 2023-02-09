#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

struct person 
{
    int age;
    char name[20];
};

int main(void) 
{
    struct person* ptr;
    int i, n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    /* 동적 할당 */
    ptr = (struct person*)malloc(n * sizeof(struct person));
    if (ptr == NULL) 
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    /* 구조체에 정보 입력 */
    for (i = 0; i < n; ++i) 
    {
        printf("Enter the age and name of person %d: ", i + 1);
        scanf("%d", &(ptr + i)->age);
        scanf("%s", (ptr + i)->name);
    }

    printf("Displaying Information:\n");

    /* 구조체 정보 출력 */
    for (i = 0; i < n; ++i)
        printf("Age: %d  Name: %s\n", (ptr + i)->age, (ptr + i)->name);

    return 0;
}
