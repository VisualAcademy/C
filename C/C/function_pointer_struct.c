#include <stdio.h>

typedef struct Person
{
    int age;
    void (*grow_older)(struct Person*);
} Person;

// Person 구조체의 age를 증가시키는 함수
void grow_older_by_one_year(Person* person)
{
    person->age++;
}

int main(void)
{
    // 구조체 초기화 시, 함수 포인터 멤버에 함수의 주소 할당
    Person person = { .age = 21, .grow_older = grow_older_by_one_year };

    printf("현재 나이: %d세\n", person.age);
    person.grow_older(&person);  // 함수 포인터를 통해 함수 호출
    printf("1년 후 나이: %d세\n", person.age);

    return 0;
}
