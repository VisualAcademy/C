#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//사람을 나타내는 구조체
typedef struct
{
    int id; //사람의 id
    char name[20]; //사람의 이름
    int age; //사람의 나이
} Person;

//나이를 기준으로 두 사람을 비교하는 함수
int compare(const void* a, const void* b)
{
    return ((Person*)a)->age - ((Person*)b)->age;
}

int main(void)
{
    //사람들을 나타내는 배열
    Person people[] =
    {
        {1, "홍길동", 20},
        {2, "백두산", 25},
        {3, "임꺽정", 30},
        {4, "한라산", 28},
    };
    int n = sizeof(people) / sizeof(people[0]);

    printf("정렬되지 않은 사람들:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s, %d\n", people[i].id, people[i].name, people[i].age);
    }

    //나이를 기준으로 사람들을 정렬
    qsort(people, n, sizeof(Person), compare);

    printf("나이별로 정렬된 사람들:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s, %d\n", people[i].id, people[i].name, people[i].age);
    }

    return 0;
}
