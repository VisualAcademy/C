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

    /* ���� �Ҵ� */
    ptr = (struct person*)malloc(n * sizeof(struct person));
    if (ptr == NULL) 
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    /* ����ü�� ���� �Է� */
    for (i = 0; i < n; ++i) 
    {
        printf("Enter the age and name of person %d: ", i + 1);
        scanf("%d", &(ptr + i)->age);
        scanf("%s", (ptr + i)->name);
    }

    printf("Displaying Information:\n");

    /* ����ü ���� ��� */
    for (i = 0; i < n; ++i)
        printf("Age: %d  Name: %s\n", (ptr + i)->age, (ptr + i)->name);

    return 0;
}
