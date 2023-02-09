#include <stdio.h>

typedef struct Person
{
    int age;
    void (*grow_older)(struct Person*);
} Person;

void grow_older_by_one_year(Person* person)
{
    person->age++;
}

int main(void)
{
    Person person = { .age = 21, .grow_older = grow_older_by_one_year };

    printf("Person's current age: %d\n", person.age);
    person.grow_older(&person);
    printf("Person's age after growing older: %d\n", person.age);

    return 0;
}
